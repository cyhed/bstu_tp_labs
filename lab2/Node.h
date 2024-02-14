#pragma once
#include <iostream>

class Node
{
    //обязательные поля
public:
     Node *next = nullptr, * prev = nullptr;

public:
    std::string data;
    Node();
    Node(const Node& p)
    {
        data = p.data;        
    }
};
template<class Type>
class DataNode :
    public Node {
public:
    Type data;
};





