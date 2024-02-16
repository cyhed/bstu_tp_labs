#include "Queue.h"   

void Queue::Push(Node p) {

    Node* node = new Node;//в очередь нельзя передовать ссылку, так как у внешнего пространства останится сылка на ноду, и она может порушить мою очередь
    *node = p;

    this->Push(node);
}

void Queue::Push(Node * node) {     

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

Queue& Queue::operator= (Queue &p) {
    
    this->Clear();
    std::cout << "================\n";
    
    Node *n = new Node;
    int count=0;
    int pCount = p.Count();
    
    while (count< pCount) {
        std::cout << count << " " << pCount << "\n";
        *n = p.At(count++);
        std::cout << n->data << std:: endl;
        this->Push(n);
       
    }
    
    std::cout <<"-=-=-=-=-=-=-=-=-=-=-=-=-\n";
   
    return *this;
}

Queue::Queue() {   
}

Queue::Queue(Node p) {
    Push(p);
}

/*Queue::Queue(Queue& p) {
    /*std::cout << "++++++++++++++++++++++++++++\n";
    this->Clear();
    //Queue queue;
    Node* n = new Node;
    while (!p.IsEmpty()) {
        n = p.Pop();
        this->Push(n);
       // queue.Push(n);
    }
}*/

void Queue::Clear() {
    while (!IsEmpty()) {
        delete Pop();
    }
}

Queue::~Queue() {
    Clear();
}

void Queue::Input() {
    Node p ;
    std::cout << "input data\n";
    std::cin >> p.data;
    Push(p);
}

void Queue::Output() {
    Node* p = start;
    if (p == nullptr)
        std::cout << "empty\n";
    else
        std::cout << "Count: " << this->Count() << std::endl;
        while (p != nullptr) {

            std::cout << "Output data " << p->data << std::endl;

            p = p->prev;
        }    
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

Node* Queue::At(int number){
    int count = this->Count();
    if (number > count)
        number = count;

    Node* p = start;
    if (p!= nullptr)        
    for (int i = 0; i < number ; i++) {
        std::cout << p->data << std::endl;
        p = p->prev;
    }
    std::cout << p->data << " data in" << std::endl;
    Node *node = new Node(*p) ;
    std::cout << node->data << " At" << std::endl;
    return node;
}








