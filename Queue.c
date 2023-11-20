// // Question 21 - Write a C/C++ program to implement Circular/ Priority/Double Ended queue & operation (insert and delete) using array.

#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        return 1;
    return 0;
}

int isEmpty()
{
    if (front == -1)
        return 1;
    return 0;
}

void enQueue(int element)
{
    if (isFull())
        printf("\n Queue is full!! \n");
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\n Inserted -> %d", element);
    }
}

int deQueue()
{
    int element;
    if (isEmpty())
    {
        printf("\n Queue is empty !! \n");
        return (-1);
    }
    else
    {
        element = items[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
        printf("\n Deleted element -> %d \n", element);
        return (element);
    }
}

int main()
{
    deQueue();

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    deQueue();

    return 0;
}

////////////////////////////////////////////////

// // Question 22 - Write a C/C++ program to implement Circular/ Priority/Double Ended queue & operation (insert and delete) using linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *front = NULL;
Node *rear = NULL;

void enQueue(int value)
{
    Node *newNode = malloc(sizeof(Node));
    if (!newNode)
    {
        printf("Memory error\n");
        return;
    }
    newNode->data = value;
    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    rear->next = front;
}

void deQueue()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    if (front == rear)
    {
        free(front);
        front = NULL;
        rear = NULL;
    }
    else
    {
        Node *temp = front;
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

int main()
{
    deQueue();

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    deQueue();

    return 0;
}
