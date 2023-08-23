#include<stdio.h>
#include<conio.h>
#define SIZE 15
int enqueue(int);
int dequeue();
int display();
int queue[SIZE],front=-1,value,rear=-1;
int main()
{
	int value,choice;
	while(1)
	{
		printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit");
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nenter the value to insert:");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				default:
				printf("\nwrong selection");
		}
	}
}
int enqueue(int value)
{
	if(rear==SIZE-1)
		printf("\nQueue is full!");

	else
	{
		if(front==-1)

		front=0;
		rear++;
		queue[rear]=value;
		printf("\nInsertion is successfull!");
	}
}
int dequeue()
{
	if(front==rear)
	printf("\nQueue is empty");

else
{
	printf("\ndeleted:%d",queue[front]);
	front++;
	if(front==rear)
	front=rear=-1;
}
}
int display()
{
	if(rear==-1)
	printf("\nqueue is empty");
	else
	{
		int i;
		printf("\nQueue elements are:\n");
		for(i=front;i<=rear;i++)
		printf("%d ",queue[i]);
	}
}
