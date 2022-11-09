#pragma once
#include <iostream>
using namespace std;
class Array
{
private:
	int size;
	int length;
	int* items;
public:
	Array(int arrsize); //Constructor
	void Fill();
	void Display();
	int getSize();
	int getLenght();
	int Search(int key);
	void Append(int newItem);
	void Insert(int index, int newItem);
	void Delete(int index);
	void Enlarge(int newsize);
	void Merge(Array other);
};

