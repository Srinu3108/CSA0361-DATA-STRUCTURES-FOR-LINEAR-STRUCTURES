#include<stdio.h>
int main()
{
	int a[100],i,n,x,p;
	printf("enter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the element:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("%d founded at the position %d",x,i+1);
			break;
		}
	}
	if(a[i]!=x)
{
printf("\nelement is not founded");
}
return 0;
}