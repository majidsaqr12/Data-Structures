#include <iostream>
#include "linked_list.h"
#include "Node.h"
using namespace std;
int main()
{
    linked_list list;
    if (list.isempty())
    {
        cout << " Linked List Is Empty \n";
    }
    else
    {
        cout << " The List Contain " << list.Counter();
    }

    int items;
    cout << " Enter Item To Insert In List \n";
    cin >> items;
    list.InsertFirst(items);
    list.Display();
    cout << endl;
    cout << " Enter Item To Insert In Last List \n";
    int item;
    int newvalue;
    cin >> item;
    cin >> newvalue;
    list.InsertBefore(item, newvalue);
    list.Display();

}