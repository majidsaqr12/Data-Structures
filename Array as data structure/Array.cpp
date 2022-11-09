#include "Array.h"

Array::Array(int arrsize) : size(arrsize) , length(0) , items(new int[arrsize])
{
}

void Array::Fill()
{
	int no_of_items;
	cout << "How many items you want to fill ? \n";
	cin >> no_of_items;
	if (no_of_items > size)
	{
		cout << " You cannot exceed the array size \n";
		return;
	}
	else
	{
		for (int i = 0; i < no_of_items; i++)
		{
			cout << "Enter item number : " << i << endl;
			cin >> items[i];
			length++;
		}
	}
}

void Array::Display()
{
	cout << " Display Array Content \n";
	for (int i = 0; i < length; i++)
	{
		cout << items[i] << "\t";
	}
	cout << endl;
}

int Array::getSize()
{
	return size;
}

int Array::getLenght()
{
	return length;
}

int Array::Search(int key)
{
	int index = -1;
	for (int i = 0; i < length; i++)
	{
		if (items[i] == key)
		{
			index = i;
			break;
		}
	}
	return index;
}

void Array::Append(int newItem)
{
	if (size > length)
	{
		items[length] = newItem;
		length++;
	}
	else
	{
		cout << "Sorry Your Array Is Full \n";
	}
}

void Array::Insert(int index, int newItem)
{
	if (index >= 0 && index < size)
	{
		for (int i = length; i > index; i--)
		{
			items[i] = items[i - 1];
		}
		items[index] = newItem;
		length++;
	}
	else
	{
		cout << " Out Of Range \n";
	}
}

void Array::Delete(int index)
{
	if (index > 0 && index < size)
	{
		for (int i = index; i < length - 1; i++)
		{
			items[i] = items[i + 1];
			length--;
		}
	}
	else
	{
		cout << "Out Of Range \n";
	}
}

void Array::Enlarge(int newsize)
{
	if (newsize <= size)
	{
		cout << "New Size Must Be Larger Than Current Size \n";
		return;
	}
	else
	{
		size = newsize;
		int* old = items;
		items = new int[newsize];
		for (int i = 0; i < length; i++)
		{
			items[i] = old[i];
		}
		delete[]old;
	}
}

void Array::Merge(Array other)
{
	int newsize = size + other.getSize();
	size = newsize;
	int* old = items;
	items = new int[newsize];
	int i;
	for (i = 0; i < length; i++)
	{
		items[i] = old[i];
	}
	delete[]old;
	int j = i;
	for (int i = 0; i < other.getLenght(); i++)
	{
		items[j++] = other.items[i];
		length++;
	}
}
