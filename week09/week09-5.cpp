#include<stdio.h>
#include<string.h>
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
	for(int k=0;k<n-1;k++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(g[i] < g[i+1])
			{
				int t=g[i];
				g[i]=g[i+1];
				g[i+1]=t;

				char tname[80];
				strcpy(tname,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],tname);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s %d\n",name[i],g[i]);
	}
}
