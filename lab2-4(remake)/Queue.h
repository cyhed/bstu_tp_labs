#pragma once
#include "Node.h"

class Queue {

    Node* start = nullptr, * end = nullptr;

public:

    Queue();
    Queue(Node &p);
    Queue(Queue &q);
    
    void Clear();
    void Delete();
    ~Queue();


    
    void Push(Node &p);
    Node* Pop();


    Node& At(int number);
    Queue& Clone();
    int Count();      
    bool IsEmpty();    
    
    
    void operator + (Node &p);
    Node* operator - ();
    Queue& operator = (const Queue& p);
    

    std::string to_string();
    
};

