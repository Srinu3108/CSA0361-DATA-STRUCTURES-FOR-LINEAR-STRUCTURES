#include<stdio.h>
int quicksort(int a[34],int fst,int lst);
int main()
{
	int a[34],i,j,fst,lst,pivot,n,temp;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("\nEnetr the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	quicksort(a,0,n-1);
	printf("\Quick sort:");
	for(i=0;i<n;i++)

	printf("%d ",a[i]);

		return 0;
	}
	
	int quicksort(int a[34],int fst,int lst)
	{
		int i,j,pivot,temp;
	if(fst<lst)
	{
		pivot=fst;
		i=fst;
		j=lst;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<lst)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,fst,j-1);
		quicksort(a,j+1,lst);
	}
}