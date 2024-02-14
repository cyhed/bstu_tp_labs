#pragma once
#include <string>
#include <exception>
struct  Node{
public:
	Node* next = nullptr, * prev = nullptr;

	virtual ~Node();

	virtual  Node& Clone() = 0;
	virtual std::string to_string() ;
};

template<typename Type>
struct DataNode :
	public Node {
public:
	Type *data;

	DataNode() {};
	DataNode(const Type &data) {
		try {
			this->data = data.Clone;			
		}
		catch (std::exception e) {}
		try {
			this->data = new Type(data);
		}
		catch (std::exception e) {}
		try {
			
			data = new Type();
			*(this->data)= *(data);
		}
		catch (std::exception e) {}
	};

	~DataNode()
	{
		delete data;
	}


	Node& Clone() {
		Node* newNode = new DataNode<Type>(this->data);
		return newNode;		
	}


	std::string to_string() {
		
		std::string res = "";
		try {
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
		return res;
		
	}
	


	
};
