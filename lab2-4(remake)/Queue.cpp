#include "Queue.h"
Queue::Queue() {};

Queue::Queue(Node &p) {
    Push(p);
}

Queue::Queue( Queue& q) {
    this->Clear();
    *this = q.Clone();
};



void Queue::Clear() {
    while (!IsEmpty()) {
        delete Pop();
    }
};

void Queue::Delete() {
    this->Clear();
    delete this;
};

Queue::~Queue() {
    this->Delete();    
};



void Queue::Push(Node &node) {
    Node* copyNode = &node.Clone();

    copyNode->next = end;

    if (end != nullptr) {
        end->prev = copyNode;
    }
    copyNode->prev = nullptr;

    end = copyNode;

    if (start == nullptr) {
        start = end;
    }
}

Node* Queue::Pop() {

    Node* deleting = start;
    if (this->IsEmpty()) {
        return nullptr;
    }

    if (start->prev != nullptr) {
        start->prev->next = nullptr;
    }
    else {
        end = nullptr;
    }

    start = deleting->prev;

    deleting->prev = nullptr;

    return  deleting;
}


Node& Queue::At(int number) {

    int count = this->Count();
    if (number > count)
        //можно генерировать исключение выход за размер
        number = count;

    Node* p = start;
    if (p != nullptr) {
        for (int i = 0; i < number; i++) {
            if (p->prev != nullptr)
                p = p->prev;
            else
                break;
        }
        return p->Clone();
    }
    else {
        return *p;
        //также можно генерировать исключение выход за размер
    }
        
    
}
   
Queue& Queue::Clone() {
    Queue* queue = new Queue();
    int count = 0;
    int pCount = this->Count();

    while (count < pCount) {        
        queue->Push(this->At(count++));
    }
    return *queue;
}

bool Queue::IsEmpty() {
    return start == nullptr && end == nullptr;
}

int Queue::Count() {
    int count = 0;
    Node* p = start;
    while (p != nullptr)
    {
        ++count;
        p = p->prev;
    }
    return count;
}



void Queue::operator + (Node& p) {
    Push(p);
}

Node* Queue::operator - () {
    return Pop();
}

Queue& Queue::operator = (Queue& other) {
    this->Clear();  
    
    int count = 0;
    int pCount = other.Count();
    
    while (count < pCount) {          
        this->Push(other.At(count++));
    }    
    return *this;
}

