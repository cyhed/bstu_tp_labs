#pragma once
#include <iostream>

class Node
{
    //������������ ����
public:
     Node *next = nullptr, * prev = nullptr;

public:
    std::string data;

};
template<class Type>
class DataNode :
    public Node {
public:
    Type data;
};





