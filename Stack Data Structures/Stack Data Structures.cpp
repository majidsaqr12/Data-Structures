#include <iostream>
#include "Stack.h"
#include "Node.h"
using namespace std;
int main()
{
    int item;
    Stack S;
    for (int i = 0; i < 3; i++)
    {
        cout << " Please Enter Your Item \n";
        cin >> item;
        S.Push(item);
        S.Display();
    }

    cout << S.Pop() << " Was Deleted \n";
    S.Display();
}
