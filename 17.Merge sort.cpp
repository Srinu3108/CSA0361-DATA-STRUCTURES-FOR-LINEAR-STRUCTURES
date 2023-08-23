#include<stdio.h>
int main()
{
	int i,a[100],n,first,last,middle,temp;
	printf("enter the size:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	first=0;
	last=n-1;
	middle=(first+last)/2;
	
	for(i=0;i<=middle;++i)
	{
		for(int j=i+1;j<=middle;++j)
	
	{
		if(a[i]>a[j])
		{
		  temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;
		}
		
	}
}
	printf("\nHalf sorted list:");
	for(i=0;i<=middle;i++)
	printf("%d ",a[i]);
	
	i=middle;
	last=n-1;
	middle=(i+last)/2;
	
	for(i=middle;i<=last;++i)
	{
		for(int j=i+1;j<=last;++j)
		{
		if(a[i]>a[j])
		{
		  temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;
		}
		
	}
}	
	printf("\nHalf sorted list:");
	for(i=middle;i<=last;i++)
	printf("%d ",a[i]);
	
	for(i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nMerge sorted list:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);

	return 0;
}