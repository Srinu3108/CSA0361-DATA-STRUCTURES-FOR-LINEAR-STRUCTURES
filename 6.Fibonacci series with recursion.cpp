#include<stdio.h> 
int fibonacci(int n);
int main()
{
	int n,i;
	printf("enter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d, ",fibonacci(i));
	}
	return 0;
}
int fibonacci(int n)
{
	if(n<2)
	return n;
	return fibonacci(n-1)+fibonacci(n-2);
}