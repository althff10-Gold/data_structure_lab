#include <stdio.h>
#define SIZE 5  

int queue[SIZE];
int front = -1, rear = -1;

int isFull() 
{
    return rear == SIZE - 1;
}

int isEmpty() 
{
    return front == -1 || front > rear;
}

void enqueue(int value)
 {
    if (isFull()) 
    {
        printf("Queue is full (Overflow)\n");
        return;
    }

    if (front == -1) front = 0; 
    queue[++rear] = value;
    printf("Enqueued: %d\n", value);
}

void dequeue()
 {
    if (isEmpty())
     {
        printf("Queue is empty (Underflow)\n");
        return;
     }

    printf("Dequeued: %d\n", queue[front++]);

    if (front > rear) 
    {
        front = rear = -1;
    }
}

void display() 
{
    if (isEmpty()) 
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() 
{
    int choice, value;

    while (1) 
    {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

