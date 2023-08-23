#include<stdio.h>
int stack[100],choice,x,n,i,top;
int push();
int pop();
int display();
int main()
{
	top=-1;
	printf("Enter the stack size:");
	scanf("%d",&n);
	printf("\nSTACK OPERATIONS USING ARRAY");
	printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT");
	while(1) 
	{
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
				push();
				break;
	        	}
	        case 2:
	        	{
	  			pop();
      			break;
				}
			case 3:
				{
				display();
				break;
				}
			case 4:
				{
			    printf("\nExit Point");
				break;
				}
				default:
				{
					printf("\nEnter the valid choice(1/2/3/4)");
				}
	}
}
while(choice!=4);
return 0;
}
int push()
{
	if(top>=n-1)
	{
		printf("\nstack is full!");
	}
	else
	{
		printf("\nEnter the value to insert:\n");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
int pop()
{
	
	if(top<=-1)
	{
		printf("\nstack is empty");
	}
	else
	{
		printf("\ndeleted element is:%d",stack[top]);
		top--;
	}
}
int display()
{
if(top>=0)
{
	
	printf("\nElements in the stack:\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
	else
	{
		printf("\nstack is empty");
}
}

