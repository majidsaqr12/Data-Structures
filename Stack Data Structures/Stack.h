#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
class Stack
{
	Node* top;
public:
	Stack();
	bool isempty();
	bool IsFull();
	void Push(int item);
	int Pop();
	int Peek();
	int Counter();
	bool IsFound( int key );
	void Display();
};

