#pragma once
#include "GenericStructure.h"

using namespace std;

class BST :
	public GenericStructure
{
public:
	BST() = default;
	virtual ~BST() = default;

	virtual void addElement(int value);
	virtual void removeElement(int value);
	virtual void clearStructure();
	virtual bool findValue(int toFind);
	virtual void printData();
	virtual void fixBalance();

private:
	struct Node {
		Node* parent = nullptr;
		unique_ptr<Node> right = nullptr;
		unique_ptr<Node> left = nullptr;
		int	  value;
	};
	
	unique_ptr<Node> root = nullptr;

	Node* getNode(Node* startPoint, int value);
	Node* getMin(Node* searchPoint);
	Node* getMax(Node* searchPoint);
	Node* getPredecessor(Node* searchPoint);
	Node* getSuccessor(Node* searchPoint);
	void printNode(std::string &sMiddle, std::string &sBefore, unique_ptr<Node> &currNode);
};

