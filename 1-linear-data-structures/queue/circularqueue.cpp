#include <iostream>

const int MAX = 10;

class CircularQueue
{
    int arr[MAX];
    int front, rear;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {
        if ((rear + 1) % MAX == front)
        {
            std::cout << "Queue is full" << std::endl;
        }
        else
        {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % MAX;
            arr[rear] = x;
        }
    }

    int dequeue()
    {
        if (front == -1)
        {
            std::cout << "Queue is empty" << std::endl;
            return -1;
        }
        else
        {
            int x = arr[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % MAX;
            }
            return x;
        }
    }

    void display()
    {
        if (front == -1)
        {
            std::cout << "Queue is empty" << std::endl;
        }
        else
        {
            for (int i = front; i != rear; i = (i + 1) % MAX)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << arr[rear] << std::endl;
        }
    }
};

int main()
{
    CircularQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    

    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.display();

    return 0;
}
