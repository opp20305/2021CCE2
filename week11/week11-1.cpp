#include<stdio.h>
int main()
{
    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    printf("��Ū��Ft:%d\n",t);
}
