#include "CastQueueTester.h"
void CastQueueTester::Run() {
    Queue* queue = new Queue;
    DataNode<int>* dNode = new DataNode<int>(10);
    queue->Push(*dNode);
    std::cout << dNode->data << "default node" << std::endl;

    DataNode<int>* bptr = dynamic_cast<DataNode<int>*> (queue->Pop());
    std::cout << bptr->data << "Pop node" << std::endl;
    std::cout << dNode->data << "default node" << std::endl;


    DataNode<int>* dNode1 = &dNode->Clone();
    std::cout << dNode1->data << "Clone node to node " << std::endl;


    DataNode<int>* dNode2 = dynamic_cast<DataNode<int>*>(dNode1);
    std::cout << dNode2->data << "Clone node to node and cast" << std::endl;

    queue->Push(*dNode);
    int data = dynamic_cast<DataNode<int>*> (&queue->At(2))->data;
    std::cout << data << "data from at" << std::endl;

    std::cout << "Hello World!\n";
}