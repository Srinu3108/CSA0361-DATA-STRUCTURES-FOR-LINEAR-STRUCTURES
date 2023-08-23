 #include<stdio.h>
 int main()
 {
 	int a[20],i,k,n,p=0,temp,j;
 	printf("Enter the number of elements:");
 	scanf("%d",&n);
 	printf("\nEnter the all elements:");
 	for(i=0;i<n;i++)
 	{
 	scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 {
 	temp=a[i];
 	j=i-1;
 	while(temp<a[j]&&(j>=0))
 	{
 		a[j+1]=a[j];
 		j=j-1;
	 }
	 a[j+1]=temp;
	 p++;
	 printf("\nAfter pass %d ",p);
	 for(k=0;k<n;k++)
	 
	 	printf("%d, ",a[k]);
	 }
	 printf("\nSorted list:");
	 for(i=0;i<n;i++)
	 printf("%d, ",a[i]);
 }