// 0205_DoubleLinkedList
#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubelLinkedList
{
private:
    Node *START;

public:
    DoubelLinkedList()
    {
        START = NULL;
    }

    void addnode()
    {
        int nim;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;

        //step 1 : Allocate memory for new node
        Node *newNode = new Node();

        //step 2: Assign value to the data fields
        newNode->noMhs = nim;

        

        //
    }
}