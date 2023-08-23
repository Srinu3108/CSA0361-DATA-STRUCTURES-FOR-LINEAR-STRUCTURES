#include<stdio.h>
int main()
{
	int a[100],i,n,middle,first,last,x;
	printf("enter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the search element:");
	scanf("%d",&x);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
	if(a[middle]<x)
		first=middle+1;
		else if	(a[middle]==x)
		{
	
		printf("\n%d founded at the location %d",x,a[middle]);
		break;
	}
	else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
		printf("\nNot found! %d is not present in the list",x);
		
	return 0;
	
}