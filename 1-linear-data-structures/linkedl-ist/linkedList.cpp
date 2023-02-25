#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node (int val){
        data = val;
        next = NULL;

    }
};
void InsertAtHead(Node* &head,int d){
    //1  create a node
    
    Node* temp= new Node(d);
    //2 data insert
    temp->data = d;
    //2  point next of node to head to link second with address where head contain the address
    temp->next = head;
    // now set address of head to the new address
    head = temp;
}

// print linked list 
void print (Node* &head){
    cout << endl;
    Node* temp = head;
    while(temp !=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << endl;
}
int main(){
    //ceate a node or first node
    Node* node1 = new Node(10);

    // point head to the node 1
    Node* head = node1;
    print(head);
    InsertAtHead(head, 15);
    print(head);
    InsertAtHead(head, 17);
    print(head);
}