#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};
// stack class
class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    // push operation:
    int push(int value)
    {
        Node *newNode = new Node(); // 1. allocate memory for the new node
        newNode->data = value;      // 2. assign the value
        newNode->next = top;        // 3. set the next pointer of the new node to the current top node
        top = newNode;              // 4. update the top pionter to the new node
        cout << "Push Value: " << value << endl;
        return value;
    }
    // isEmpty operation : check if the stack is empty
    bool isEmpty()
