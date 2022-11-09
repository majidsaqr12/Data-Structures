#include <iostream>
using namespace std;
#include "Array.h"
int main()
{
    int arrsize;
    cout << "Array Size \n";
    cin >> arrsize;
    Array myarr(arrsize);
    myarr.Fill();
    cout << endl;
    myarr.Display();
    cout << endl;
    cout << "Length : " << myarr.getLenght() << "\t" << "Size : " << myarr.getSize() << endl << endl;

    // Search

    string answer;
    cout << "Do you want to search somthing ( yes / no ) " << endl;
    cin >> answer;
    if (answer == "yes")
    {
        cout << " What this is ? " << endl;
        int key;
        cin >> key;
        int index = myarr.Search(key);
        if (index == -1)
        {
            cout << " Not found \n ";
        }
        else
        {
            cout << " Founded index " << index  << endl;
        }
    }
    else
    {
        cout << "\n" ;
    }

    // Append 
 
    cout << "Do you want to Append somthing ( yes / no ) " << endl;
    cin >> answer;
    if (answer == "yes")
    {
        cout << "Please Enter Your Item \n";
        int newItem;
        cin >> newItem;
        myarr.Append(newItem);
        myarr.Display();
    }
    else
    {
        cout << "\n";
    }

    // Insert

    cout << "Do you want to Insert somthing ( yes / no ) " << endl << endl;
    cin >> answer;
    if (answer == "yes")
    {
        cout << "Enter Index & NewItem \n";
        int index, newItem;
        cin >> index >> newItem;
        myarr.Insert(index, newItem);
        myarr.Display();
    }
    else
    {
        cout << "Thank you \n";
    }

    //Delete

    cout << "Do you want to Delete somthing ( yes / no ) " << endl << endl;
    cin >> answer;
    if (answer == "yes")
    {
        cout << "Enter Index to delete \n";
        int index;
        cin >> index;
        myarr.Delete(index);
        myarr.Display();
    }
    else
    {
        cout << "Thank you \n";
    }

    //Enlarge

    cout << "Do you want to Enlarge Array ( yes / no ) " << endl << endl;
    cin >> answer;
    if (answer == "yes")
    {
        cout << "Enter New Size  \n";
        int newsize;
        cin >> newsize;
        myarr.Enlarge(newsize);
        myarr.Display();
    }
    else
    {
        cout << "Thank you \n";
    }

    //Merge

    Array other(3);
    other.Fill();
    myarr.Merge(other);
    myarr.Display();
}