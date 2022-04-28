#include<stdio.h>
char name[100][30];
int g[100];
int main()
{
    FILE * fin = fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    printf("讀到n是: %d\n",n);
    for(int i=0;i<20;i++)
    {
        fscanf(fin,"%s %d",name[i],&g[i]);
        ///printf("讀到了 %s %d\n",name[i],g[i]);
    }
    for(int i=0;i<20;i++)
    {
        printf("%s %d\n",name[i],g[i]);
    }
}
