#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
        next = NULL;
    }
    Node (int val){
        data = val;
        next = NULL;

    }
};
void InsertAtHead(Node* &head,int d){
    //1  create a node
    
    Node* newNode= new Node(d);
    //2 data insert no need this below because of construcytor
    newNode->data = d;
    //2  point next of node to head to link second with address where head contain the address
    newNode->next = head;
    // now set address of head to the new address
    head = newNode;
}


void insertAtTail(Node* &tail,int d){
    /*
    // 1 create a new node
    // 2check empty if true then the temperory is the tail or head
        // a if theres any item
        // b traversing to the current last node holding null
    // 3 point  prev last node points to new node

    */

    // 1 create a new node

    Node *newNode = new Node(d);
   if (tail == NULL){ // check empty if true then the temperory is the tail or head
        tail = newNode;
   }else{ // if theres any item
        Node* temp = tail;
        while(temp->next!=NULL){
            // traversing to the current last node holding null
            temp = temp->next;
        }
        // point  prev last node points to new node
        temp->next = newNode;
   }
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


void insertAtPos(Node* &head,int pos ,int d){
    Node *temp = head;

    Node *newNode = new Node(d);
    int cnt = 1;
    while (cnt<pos-1){
        temp = temp -> next;
        cnt++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int main(){
    //ceate a node or first node
    Node* node1 = new Node(10);

    // point head to the node 1
    Node* head = node1;
    cout << "head" << endl;
    print(head);
    InsertAtHead(head, 15);
    print(head);
    InsertAtHead(head, 17);
    print(head);
    Node* tail = node1;
    cout << "Tail" << endl;
 
    print(tail);
    insertAtTail(tail, 15);
    print(tail);
    insertAtTail(tail, 17);
    print(tail);
}