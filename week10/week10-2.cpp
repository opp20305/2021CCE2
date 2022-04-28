#include<stdio.h>
#include<string.h>
char name[100][30],tname[30];
int g[100];
int main()
{
    FILE * fin = fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    for(int i=0;i<20;i++)
    {
        fscanf(fin,"%s %d",name[i],&g[i]);
    }
    for(int k=0;k<n-1;k++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(g[i]<g[i+1])
            {
                int t=g[i];
                g[i]=g[i+1];
                g[i+1]=t;
                strcpy(tname,name[i]);
                strcpy(name[i],name[i+1]);
                strcpy(name[i+1],tname);
            }
        }
    }
    for(int i=0;i<20;i++)
    {
        printf("%s %d\n",name[i],g[i]);
    }
}
