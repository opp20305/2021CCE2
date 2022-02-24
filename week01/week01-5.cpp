#include<stdio.h>
#include<string.h>
char line[2000];
int main()
{
	int b=0;
	while(scanf("%s", line)==1)
	{
    	int N=strlen(line);
    	int a=0;
    	for(int i=0;i<N;i++)
    	{
        	if(line[i]=='2')a++;
    	}
    	printf("%d\n",a);
    	b+=a;
    }
    printf("Total: %d\n",b);
    return 0;
}
