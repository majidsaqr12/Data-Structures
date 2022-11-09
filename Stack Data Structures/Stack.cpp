#include "Stack.h"
#include "Node.h"
#include <iostream>
using namespace std;

Stack::Stack() : top(NULL)
{

}

bool Stack::isempty()
{
	return (top == NULL);
}

bool Stack::IsFull()
{
	Node* ptr = new Node();
	if (ptr == NULL)
	{
		cout << " The Stack Is Full \n";
	}
}

void Stack::Push(int item)
{
	Node* newnode = new Node();
	newnode->data = item;
	if (isempty())
	{
		top = newnode;
	}
	else
	{
		newnode->next = top;
		top = newnode;
	}
}

int Stack::Pop()
{
	int value;
	value = top->data;
	Node* delptr = top;
	top = top->next;
	delete delptr;
	return value;
}

int Stack::Peek()
{
	return top->data;
}

int Stack::Counter()
{
	int counter = 0;
	Node* temp = top;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return counter;
}

bool Stack::IsFound( int key)
{
	bool found = false;
	Node* temp = top;
	while (temp != NULL)
	{
		if (temp->data == key)
		{
			found = true;
		}
		temp = temp->next;
	}
	return found;
}

void Stack::Display()
{
	Node* temp = top;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
