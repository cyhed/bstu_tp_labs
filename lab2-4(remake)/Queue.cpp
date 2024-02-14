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


//Node& At(int number);
    // Queue& Clone();

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



std::string  Queue::to_string() {
    std::string strQueue = "";
    Node* p = start;
    while (p != nullptr)
    {
        strQueue += p->to_string();
        p = p->prev;
    }
    return strQueue;
};