#include<stdio.h>
#include<map>
#include<string.h>
#include<string>
char line[100];
int main()
{
    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    std::map<std::string,int>table;
    while(fgets(line,100,fin))
    {
        line[strlen(line)-1]=0;
        printf("Ū��F = %s = \n",line);
        table[line]++;
    }
}
