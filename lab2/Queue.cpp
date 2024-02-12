#include "Queue.h"   

void Queue::Push(Node p) {

    Node* node = new Node;//в очередь нельзя передовать ссылку, так как у внешнего пространства останится сылка на ноду, и она может порушить мою очередь
    *node = p;

    node->next = end;

    if (end != nullptr) {
        end->prev = node;
    }
    node->prev = nullptr;


    end = node;

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
    else{
        end = nullptr;
    }    

    start = deleting->prev;

    deleting->prev = nullptr;

    return  deleting;
}

bool Queue::IsEmpty() {
    return start == nullptr && end == nullptr;
}


void Queue::operator + (Node p) {
    Push(p);
}

Node* Queue::operator - () {
    return Pop();
}



Queue::Queue() {   
}

Queue::Queue(Node p) {
    Push(p);
}

Queue::~Queue() {
    while (!IsEmpty()){        
        delete Pop();
    }
}

void Queue::Input() {
    Node p ;
    std::cout << "input data\n";
    std::cin >> p.data;
    Push(p);
}

void Queue::Output() {
    Node *p = Pop();
    if (p == nullptr)
        std::cout << "empty\n";
    else
        std::cout << "Output data " << p->data << std::endl;
}








