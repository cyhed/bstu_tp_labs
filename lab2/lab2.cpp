//АТД - очередь.Дополнительно перегрузить следующие операции : +добавить элемент; -извлечь элемент; empty() проверка, пустая ли очередь.

#include <iostream>
#include "Queue.h"
int main()
{
    /*Queue queue;
    
    //проверка на пустоту после создания
    std::cout <<  queue.IsEmpty() << " empty?\n"; 
    std::cout << queue.empty() << " empty?\n\n";

    DataNode<int> p;
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
    std::cout << "Hello World!\n";*/
    


    Queue queue1 ;
    Queue queue2 ;

    
    bool end = false;
    while (!end)
    {        
        std::cout << "\nInput queue1 1\nOutput queue1 2\n";
        std::cout << "\nInput queue2 3\nOutput queue2 4\n";
        std::cout << "\nqueue1 = queue2 5\n";
        std::cout << "Exit 6\n";
        std::cout << "\nqueue2 = queue1 7\n";
        std::cout << "\queue1 ex 8\n";
        std::cout << "\nqueue2 ex 9\n";
        int switch_on;
        std::cin >> switch_on;
        switch ( switch_on)
        {
        case 1:
            queue1.Input();
            break;

        case 2:
            queue1.Output();
            break;

        case 3:
            queue2.Input();
            break;

        case 4:
            queue2.Output();
            break;
        case 5:
            queue1 = queue2;
            break;
        case 6:
            end = true;           
            break;
        case 7:
            queue2 = queue1;
            break;

        case 8:
            queue1.Pop();
            break;
        case 9:
            queue2.Pop();
            break;
        default:
            std::cout << "missing menu item\n";
            break;
        }
        

    }
   
}


