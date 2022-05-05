#include<stdio.h>
int main()
{
    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    printf("§ÚÅª¨ì¤Ft:%d\n",t);
}
