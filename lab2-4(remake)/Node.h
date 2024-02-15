#pragma once
#include <string>
#include <exception>
#include <iostream>
class  Node{
public:
	Node* next = nullptr, * prev = nullptr;	

	virtual  Node& Clone() = 0;
	
};

template<typename Type>
class DataNode :
	public Node {
public:
	Type data;
	DataNode();
	DataNode(Type data);
	DataNode(const DataNode&); // конструктор копирования
	~DataNode();

	DataNode& Clone() override {
		DataNode* newNode = nullptr;
		newNode =new DataNode<Type>(*this);
		return *newNode;		
	}


	/*std::string to_string() {
		std::string res = "";
		/*try {
			res = data.toString();
			return res;
		}
		catch (std::exception e) {}
		try {
			res = std::to_string(data);
			return res;
		}
		catch (std::exception e) {}
		try {
			res += data;
			return res;
		}
		catch (std::exception e){}
		try {
			res = data.to_string();
			return res;
		}
		catch (std::exception e) {}
		res = std::to_string(data);
		return res;		
	}*/

	
};

template <typename T>
DataNode<T>::DataNode(T data) :data{ data } {};

template <typename T>
DataNode<T>::DataNode(const DataNode& node) : data{ node.data } { };

template <typename T>
DataNode<T>::~DataNode() { };



