// lab2-4(remake).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Queue.h"
#include "CastQueueTester.h"
int main()
{	
	//CastQueueTester::Run();


	Queue *queue = new Queue();
	DataNode<int>*node = new DataNode<int>(20);
	

	queue->Push(*node);
	node->data = 10;
	queue->Push(*node);
	std::cout << node->data << " data node" << std::endl;
	node->data = 0;
	queue->Push(*node);
	std::cout << node->data << " data node" << std::endl;
	Queue* queue2 = new Queue();

	*queue2 = *queue;


	for (int i = 0; i < queue->Count(); i++) {
		int data = dynamic_cast<DataNode<int>*> (&queue->At(i))->data;
		std::cout << data << " data from at" << std::endl;
	}
	while (!queue->IsEmpty())
	{
		DataNode<int>* bptr = dynamic_cast<DataNode<int>*> (queue->Pop());
		std::cout << bptr->data << "Pop node" << std::endl;
	}
	while (!queue2->IsEmpty())
	{
		DataNode<int>* bptr = dynamic_cast<DataNode<int>*> (queue2->Pop());
		std::cout << bptr->data << "Pop node" << std::endl;
	}
}

