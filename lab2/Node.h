#pragma once
#include <iostream>
struct Node
{
    //������������ ����
public:
    struct Node* next = nullptr, * prev = nullptr;

    //��������������
public:
    std::string data;
};

