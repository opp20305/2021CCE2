#include<stdio.h>
char line[100];
int main()
{
    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    printf("��Ū��Ft:%d\n",t);
    while(fgets(line,100,fin))
    {
        printf("Ū��F = %s = \n",line);
    }
}
