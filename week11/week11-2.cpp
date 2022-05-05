#include<stdio.h>
char line[100];
int main()
{
    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    printf("我讀到了t:%d\n",t);
    while(fgets(line,100,fin))
    {
        printf("讀到了 = %s = \n",line);
    }
}
