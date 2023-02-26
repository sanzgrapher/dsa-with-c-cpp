#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        

       
};
void addNode(Node* &head,int d){
        Node *newNode = new Node();
        newNode->data = d;
       if(head==NULL){
           head = newNode;
       }else{
           Node *temp = head;
           while(temp->next!=NULL){
               temp = temp->next;
           }
           temp->next = newNode;
           cout << newNode->next << ".." <<endl;
       }
}
void displayList(Node*&head)
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

        addNode(head, 10);
        addNode(head, 100);
        addNode(head, 10000);
        displayList(head);
}