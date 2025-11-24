#include<stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1, rear = -1;
void enqueue(int item)
{
	if (rear == MAX_SIZE - 1)
		printf("Queue is Full!!\n");
	else
	{
		if (front == -1)
			front = 0;
		rear++;
		queue[rear] = item;
		printf("Inserted %d\n", item);
	}
}
void dequeue()
{
	if (front == -1 || front > rear)
		printf("Queue is Empty!!\n");
	else 
	{
		printf("Deleted %d\n", queue[front]);
		front++;
	}
}
void display()
{
	if (front == -1 || front > rear)
		printf("Queue is Empty!!\n");
	else
	{
		printf("Queue elements are: ");
		for (int i = front; i <= rear; i++)
			printf("%d ", queue[i]);
		printf("\n");
	}
}
int main()
{
	int choice, item;
	do
	{
		printf("\n---- Queue Menu ----\n");
		printf("1. Enqueue 2. Dequeue 3. Display 4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter element to insert: ");
				scanf("%d", &item);
				enqueue(item);
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
			case 4: printf("Exiting...\n");
				break;
			default: printf("Invalid Choice!!\n");
		}
	} while(choice != 4);
	return 0;
}
