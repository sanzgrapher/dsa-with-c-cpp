#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class Queue{
    public:

    Node *front;
    Node *rear;
    Queue(){
        front =NULL;
        rear = NULL;
    }
    void enqueue(int d){
        Node *newNode = new Node;
        ;
        newNode->data = d;
        newNode->next = NULL;
        if(rear==NULL){
            front = newNode;
        }
        else{
            rear->next = newNode;
        }
        rear = newNode;
    }

    void dequeue(){
        if(front==NULL){
            cout << "empty";

        }else{
            Node *temp = front;
            front = front->next;
            cout << "del data " << temp->data<<endl;
            temp->next = NULL;
            delete temp;
        }
    }
    void peek(){
        Node *temp = front;
        while (temp!=NULL)

        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }





};

int main(){
    Queue q1;
    // q1.dequeue();
    q1.enqueue(5);
    q1.enqueue(10);
    q1.peek();

    q1.dequeue();
    q1.enqueue(15);
    q1.peek();

    q1.dequeue();

    q1.dequeue();
    q1.dequeue();
    

}