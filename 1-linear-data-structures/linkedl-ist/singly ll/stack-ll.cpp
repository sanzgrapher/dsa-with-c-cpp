#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class Stack
{
public:
    Node *top;

    Stack()
    {
        top = NULL;
    }

    void push(int d)
    {
        Node *newNode = new Node;
        newNode->data = d;
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "empty";
        }
        else
        {
            
            Node *temp = top;
            top = top->next;
            cout << temp->data <<"pop"<<endl;
            temp->next = NULL;
            
        }
    }
    void peek()
    {
      

        Node *temp = top;
        while (temp!= NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack s1;
    s1.push(5);
    s1.push(55);
    s1.push(555);
    s1.peek();
    s1.pop();
    s1.peek();
}