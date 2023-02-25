#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue
{
    int front, rear;
    int arr[MAX_SIZE];

public:
    Queue() : front(-1), rear(-1) {}

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % MAX_SIZE == front;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Error: Queue is Full" << endl;
            return;
        }
        rear = (rear + 1) % MAX_SIZE;
        arr[rear] = x;
        if (front == -1)
            front = rear;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is Empty" << endl;
            return -1;
        }
        int x = arr[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX_SIZE;
        return x;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Front element is: " << q.peek() << endl;
    q.dequeue();
    cout << "Front element is: " << q.peek() << endl;

    return 0;
}
