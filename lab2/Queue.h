#pragma once
#include "Node.h"


class Queue{    
     
    Node *start = nullptr, *end = nullptr;

public:   
    Queue();
    Queue(Queue &q);
    Queue(Node &p);
    ~Queue();

    int Count();

    void Push(Node p);
    void Push(Node *p);

    Node * Pop();

    Node* At(int number);
    bool empty() {
        return IsEmpty();}
    bool IsEmpty();

    void Clear();
    Queue* Clone();

    void operator + (Node p);
    Node* operator - ();
    Queue& operator = (Queue &p);

    void Input();
    void Output();
};




