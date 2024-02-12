#pragma once
#include "Node.h"

class Queue{    
     
    Node* start = nullptr, * end = nullptr;

public:   
    Queue();
    Queue(Node p);
    ~Queue();


    void Push(Node p);
    Node* Pop();

    bool empty() {
        return IsEmpty();}
    bool IsEmpty();


    void operator + (Node p);
    Node* operator - ();


    void Input();
    void Output();
};




