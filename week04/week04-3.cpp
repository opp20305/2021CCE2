#include<stdio.h>
char line[2000];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1)printf("\n");
		int max=0;
		int a[256]={};
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			a[c]++;
			if(a[c]>max) max=a[c];
		}
		for(int k=1;k<=max;k++)
		{
			for(int c=128;c>=32;c--)
			{
				if(a[c]==k)printf("%d %d\n",c,a[c]);
			}
		}
		t++;
	}
	return 0;
}
