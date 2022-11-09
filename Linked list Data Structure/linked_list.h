#pragma once
#include "Node.h"
class linked_list
{
public:
	Node* head;
	linked_list();
	bool isempty();
	void InsertFirst(int newvalue);
	void InsertBefore( int item,int newvalue);
	void Append(int newvalue);
	void Display();
	int Counter();
	bool isfound(int key);
	void Delete(int item);
};

