#pragma once
#include <iostream>
struct Node
{
    //обязательные поля
public:
    struct Node* next = nullptr, * prev = nullptr;

    //необязательные
public:
    std::string data;
};

