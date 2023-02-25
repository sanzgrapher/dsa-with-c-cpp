#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insertAtFront(Node *&head, int d)
{
    Node *newNode = new Node();
    newNode->data = d;

    if (head == NULL)
    {
        newNode->next = NULL;
    }
    else
    {

        newNode->next = head;
    }
    head = newNode;
}

void insertAtLast(Node *&head, int d)
{
    Node *newNode = new Node();
    newNode->data = d;

    if (head == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print(Node *head)
{
    Node *temp = new Node();
    temp = head;
    while (temp!= NULL)
    {
        cout << temp->data<< " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAt(Node *&head, int p, int d)
{
    Node *newNode = new Node();
    newNode->data = d;

    Node *temp = head;
    int c = 1;
    while (c < p - 1)
    {
        temp = temp->next;
        c++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    Node *head = NULL;

    insertAtFront(head ,10);
    insertAtLast(head ,30);
    insertAtFront(head ,20);
    insertAt(head,2,600);
        print(head);
}