// lab2-4(remake).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Queue.h"
#include "CastQueueTester.h"
#include "QueueTester.h"
void Input(Queue* queue);
void Output(Queue* queue);
int main()
{	
	//CastQueueTester::Run();
	//QueueTester::Run();

	Queue queue1;
	Queue queue2;

    bool end = false;
    while (!end)
    {
        std::cout << "======--Menu--======\n1 Input queue1 1\n2 Output queue1 2\n";
        std::cout << "3 queue1 ex 3\n";
        std::cout << "4 queue1 = queue2 4\n";

        std::cout << "\n5 Input queue2 5\n6 Output queue2 6\n";
        std::cout << "7 queue2 ex 7\n";
        std::cout << "8 queue2 = queue1 8\n";
        
        std::cout << "\n9 Exit 9\n==============-======";
        
        std::cout << "\nChoose: ";

        int switch_on;
        std::cin >> switch_on;
        
        switch (switch_on)
        {
        case 1:
            Input(&queue1);
            break;

        case 2:
            Output(&queue1);
            break;
        case 3:
            queue1.Pop();
            break;
        case 4:
            queue1 = queue2;
            break;

        case 5:
            Input(&queue2);
            break;

        case 6:
            Output(&queue2);
            break;
        case 7:
            queue2.Pop();
            break;
        case 8:
            queue2 = queue1;
            break;
        case 9:
            end = true;
            break;      

        
        
        default:
            std::cout << "missing menu item\n";
            break;
        }


    }
}

void Input(Queue *queue) {
    std::cout << "input data\n";
    std::string data;
    std::cin >> data;

    DataNode<std::string>* dNode = new DataNode<std::string>(data);
    queue->Push(*dNode);  
    
   
}

void Output(Queue* queue) {

    int count = 0;
    int pCount = queue->Count();
    std::cout << "{";
    while (count < pCount) {
        std::string data = dynamic_cast<DataNode<std::string>*> (&queue->At(count++))->data;
        std::cout << data << " , " ;        
    }
    std::cout <<  "}\n";
}

