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
    {
        return top == NULL; // return if the top pointer is NULL, indicating an empty stack
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; // if the stack is empty, print a message and return
        }
        cout << "popped value: " << top->data << endl;
        top = top->next; // update the top pionter to the next node
    }
    // peek/top operation: retrieve the value of the topmost element without removing it
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }
};
int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:
        cout << "Enter the value to push: ";
        cin >> value;
        stack.push(value);
        break;
    case 2:
        stack.pop();
        break;
