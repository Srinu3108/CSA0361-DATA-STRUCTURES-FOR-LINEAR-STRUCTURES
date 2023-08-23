#include<stdio.h>
#include<conio.h>
#define INFINITY 99999
#define MAX 20
void di(int G[MAX][MAX],int n,int sn);
int main()
{
	int G[MAX][MAX],i,j,n,u;
	printf("enter the number of vertices:");
	scanf("%d",&n);
	printf("\nEnter the adjacancy matrix:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&G[i][j]);
	printf("\nEnter the starting node:");
	scanf("%d",&u);
	di(G,n,u);
	return 0;
} 
void di(int G[MAX][MAX],int n,int sn)
{
	int cost[MAX][MAX],distance[MAX],pred[MAX];
	int visited[MAX],count,md,nt,i,j;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(G[i][j]==0)
	cost[i][j]==G[i][j];
	for(i=0;i<n;i++)
	{
		distance[i]=cost[sn][i];
		pred[i]=sn;
		visited[i]=0;
	}
	distance[sn]=0;
	visited[sn]=1;
	count=1;
	while(count<n-1)
	{
		md=INFINITY;
		for(i=0;i<n;i++)
		if(distance[i]<md&&!visited[i])
		{
			ms=distance[i];
			nt=i;
		}
		visited[nt]=1;
		for(i=0;i<n;i++)
	}
}
