#include "linked_list.h"
#include "Node.h"
#include <iostream>
using namespace std;

linked_list::linked_list()
{
	head = NULL;
}

bool linked_list::isempty()
{
	return (head == NULL);
}

void linked_list::InsertFirst(int newvalue)
{
	Node* newnode = new Node();
	newnode->data = newvalue;

	if (isempty())
	{
		newnode->next = NULL;  // First Element
		head = newnode; // newnode = first elemnt = head
	}
	else
	{
		newnode->next = head; // already there is element
		head = newnode;
	}
}

void linked_list::InsertBefore(int item , int newvalue)
{
	if (isempty())
	{
		cout << "The List Is Empty , Your Value Is The First Item \n";
		InsertFirst(newvalue);
	}
	else
	{
		if (isfound(item))
		{
			Node* newnode = new Node();
			newnode->data = newvalue;
			Node* temp = head;
			while (temp != NULL && temp->next->data != item)
			{
				temp = temp->next;
			}
			newnode->next = temp->next;
			temp->next = newnode;
		}
		else
		{
			cout << "This Item Is Not Found \n";
		}
	}
}

void linked_list::Append(int newvalue)
{
	if (isempty())
	{
		cout << "The List Is Empty , Your Value Is The First Item \n";
		InsertFirst(newvalue);
	}
	else
	{
		Node* newnode = new Node();
		newnode->data = newvalue;
		Node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
}

void linked_list::Display()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
	}
}

int linked_list::Counter()
{
	int counter = 0;
	Node* temp = head;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return counter;
}

bool linked_list::isfound( int key)
{
	bool found = false;
	Node* temp = head;
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

void linked_list::Delete(int item)
{
	if (isempty())
	{
		cout << "This List Is Empty , No Thing To Delete \n";
	}
	if (head->data == item)
	{
		Node* delptr = head;
		head = = head->next;
		delete delptr;
	}
	else
	{
		Node* delptr = head;
		Node* prev = NULL;
		while (delptr->data != item)
		{
			prev = delptr;
			delptr = delptr->next;
		}
		prev->next = delptr->next;
		delete delptr;
	}
}
