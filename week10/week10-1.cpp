#include<stdio.h>
char name[100][30];
int g[100];
int main()
{
    FILE * fin = fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    printf("Ū��n�O: %d\n",n);
    for(int i=0;i<20;i++)
    {
        fscanf(fin,"%s %d",name[i],&g[i]);
        ///printf("Ū��F %s %d\n",name[i],g[i]);
    }
    for(int i=0;i<20;i++)
    {
        printf("%s %d\n",name[i],g[i]);
    }
}
