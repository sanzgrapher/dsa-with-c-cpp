#include <stdio.h>
#define max 5

struct queue
{
    int front;
    int rear;
    int queue[max];
};

typedef struct queue queue;

void enqueue(queue *q, int data)
{
    if (q->rear == max - 1)
    {
        printf("\n The queue is full");
        
    }
    if (q->front == -1 && q->rear == -1)
    {
        q->rear = q->front = 0;
    }
    else
    {
        q->rear = q->rear + 1;
        q->queue[q->rear] = data;

      
    }
}

int main()
{
    queue q;
    q.front = -1;
    q.rear = -1;
    enqueue(&q, 10);
    printf ("%d", q.queue[0]);
}
