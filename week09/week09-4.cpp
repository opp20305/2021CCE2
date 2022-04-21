#include<stdio.h>
char name[100][80];
int g[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s %d",name[i],&g[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(g[i] < g[i+1])
			{
				int t=g[i];
				g[i]=g[i+1];
				g[i+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s %d\n",name[i],g[i]);
	}
}
