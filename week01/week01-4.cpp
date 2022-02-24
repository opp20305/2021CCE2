#include<stdio.h>
#include<string.h>
char line[2000];
int main()
{
    for(k=0;k<4;k++)
    {
        scanf("%s", line);
    	int N=strlen(line);
    	int a=0;
    	for(int i=0;i<N;i++)
    	{
        	if(line[i]=='2')a++;
    	}
    	printf("%d\n",a);
    	b+=a;
    }
    return 0;
}
