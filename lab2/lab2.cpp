//АТД - очередь.Дополнительно перегрузить следующие операции : +добавить элемент; -извлечь элемент; empty() проверка, пустая ли очередь.

#include <iostream>
#include "Queue.h"
int main()
{
    Queue queue;
    
    //проверка на пустоту после создания
    std::cout <<  queue.IsEmpty() << " empty?\n"; 
    std::cout << queue.empty() << " empty?\n\n";

    Node p;
    p.data = 3;
    queue.Push(p);

    //проверка на пустоту после добавления
    std::cout << queue.empty() << " empty?\n";
    std::cout << p.data << " p\n\n";

    Node *p1 = queue.Pop();
    queue.Pop();

    //проверка на пустоту после изъятия
    std::cout << queue.empty() << " empty?\n";
    std::cout << p.data << " p\n";
    std::cout << p1->data << " p1\n\n";

    p1->data = p1->data + '1';

    //проверка на ссылки p и p1
    std::cout << p.data << " p\n";
    std::cout << p1->data << " p1+1\n\n";

    //проверка перегрузки +
    queue + p;
    std::cout << queue.empty() << " empty?\n\n";

    //проверка перегрузки -    
    Node* p2 = -queue;
    std::cout << queue.IsEmpty() << " empty?\n";
    std::cout << p2->data << " p2\n";
    std::cout << p2->data << " p2\n\n";

    queue.~Queue();
    p2 = -queue;
    if (p2 != nullptr)
        std::cout << p2->data << " p2\n\n";
    else
        std::cout << "empty\n";

    queue.Push(p);
    queue.Push(p);
    queue.Push(p);

    queue.~Queue();
    p2 = -queue;
    if (p2 != nullptr)
        std::cout << p2->data << " p2\n\n";
    else
        std::cout << "empty\n";

    queue.Push(p);
    queue.Push(p);
    queue.Push(p);

     p2 = -queue;
    std::cout << queue.IsEmpty() << " empty?\n";
    std::cout << p2->data << " p2\n";

    p2 = -queue;
    std::cout << queue.IsEmpty() << " empty?\n";
    std::cout << p2->data << " p2\n";
   p2 = -queue;
    std::cout << queue.IsEmpty() << " empty?\n";
    std::cout << p2->data << " p2\n";
    std::cout << "Hello World!\n";
    
    bool end = false;
    while (!end)
    {        
        std::cout << "\nInput 1\nOutput 2\nExit 3\n";

        int switch_on;
        std::cin >> switch_on;
        switch ( switch_on)
        {
        case 1:
            queue.Input();
            break;

        case 2:
            queue.Output();
            break;

        case 3:
            end = true;
            break;

        default:
            std::cout << "missing menu item\n";
            break;
        }

    }
}


