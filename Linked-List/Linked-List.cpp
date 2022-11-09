#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class linkedlist {
public:
    Node* head;

    linkedlist() {
        head = NULL;
    }

    bool IsEmpty() {
        return ( head == NULL );
    }

    void InsertFirst(int newvalue) {

        Node* newnode = new Node();
        newnode->data = newvalue;
        if (IsEmpty()) {
            newnode->next = NULL;
            head = newnode;
        }
        else {
            newnode->next = head;
            head = newnode;
        }
    }

    void InsertBefore(int item , int newvalue) {
        Node* newnode = new Node();
        newnode->data = newvalue;
        Node* temp = head;
        while (temp != NULL && temp->next->data != item) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void Display() {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << "Linked List Content : \n" << temp->data << endl;
            temp = temp->next;
        }
    }

    void Append(int newvalue) {
        Node* temp = head;
        Node* newnode = new Node();
        newnode->data = newvalue;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }

    void Delete(int item) {
        if (IsEmpty())
        {
            cout << "The Linked List Is Empty , No Item To Delete \n";
        }
        if (head->data == item) {
            Node* delptr = head;
            head = head->next;
            delete delptr;
        }
        else {
            Node* prev = NULL;
            Node* delptr = head;
            while (delptr->data != item)
            {
                prev = delptr;
                delptr = delptr->next;
            }
            prev->next = delptr->next;
            delete delptr;
        }
    }
};
int main()
{
    cout << "Please Choose \n";
    linkedlist l1;
    int i = 0;
    while (true)
    {
        cout << endl;
        string answer;
        cout << "1- Add First Item  \t  2- Add Before Item  \t  3- Append \t  4- Delete \n";
        cin >> answer;
        if (answer == "1" || answer == "Add First Item")
        {
            cout << "Enter Your Value \n";
            int newvalue;
            cin >> newvalue;
            cout << endl;
            l1.InsertFirst(newvalue);
            l1.Display();
        }
        else if (answer == "2" || answer == "Add Before Item")
        {
            int item;
            cout << "Enter Your Item To Add Your Value Before \n";
            cin >> item;
            int newvalue;
            cout << "Enter The New Value \n";
            cin >> newvalue;
            l1.InsertBefore(item , newvalue);
            l1.Display();
            
        }
        else if (answer == "3" || answer == "Append")
        {
            int newvalue;
            cout << "Enter The New Value To Append \n";
            cin >> newvalue;
            l1.Append(newvalue);
            l1.Display();
        }
        else if (answer == "4" || answer == "Delete")
        {
            int value;
            cout << "Enter The Value To Delete \n";
            cin >> value;
            l1.Delete(value);
            l1.Display();
        }
        else
        {
            cout << "Please Choose 1 Or 2 Or 3 \n";
        }
            
        i++;
    }
    l1.Display();
}