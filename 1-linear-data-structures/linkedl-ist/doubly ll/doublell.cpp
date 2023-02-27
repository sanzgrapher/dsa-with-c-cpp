#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;

};
// operations on doubly linked list
// node at end
//  ode at start
// node at beg

void addToEnd(Node* &head,int d){
    Node *newNode = new Node;
    newNode->data = d;
        newNode->prev = NULL;
        newNode->next = NULL;
    if(head==NULL){
        head= newNode;
        return;
    }else{

        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

}
void addToStart(Node*&head,int d){
    Node *newNode = new Node;
    newNode->data = d;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    newNode->next = temp;
    head= newNode;

    temp->prev = newNode;
}

void displayList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node *head = NULL;
    displayList(head);
    // addToEnd(head, 100000);
    // addToEnd(head, 10000);
    // addToEnd(head, 1000);
    // addToEnd(head, 100);
    // addToEnd(head, 10);
    addToStart(head, 100000);
    addToStart(head, 10000);
    addToStart(head, 1000);
    addToStart(head, 100);
    addToStart(head, 10);
    displayList(head);
}