#include<stdio.h>
int main()
{
	int a[30],i,n,position,element,x;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

		printf("\nEnter the element position to insert: ");
		scanf("%d",&position);
		printf("\nEnter the element:");
		scanf("%d",&element);
		for(i=n;i>=position;i--)
		a[i]=a[i-1];
		a[position-1]=element;
		n++;
		printf("\nArray after insertion");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\nEnter the element position to delete:");
		scanf("%d",&position);
		for(i=position-1;i<n-1;i++)
		a[i]=a[i+1];
		n--;
		printf("\nArray after deletion:");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\nEnter the element to search:");
		scanf("%d",&x);
		for(i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				printf("\nElement can found");
				break;
			}
		}
			if(a[i]!=x)
			{
				printf("\nElement cannot founded");
			}
		
		
		return 0;
	
}