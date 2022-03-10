#include <stdio.h>
#include <string.h>
char line[2000];
char tba[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tbb[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mrc(char c)
{
    for(int i=0;tba[i]!=0;i++)
    {
        if(c==tba[i])return tbb[i];
    }
    return ' ';
}
int mr()
{
    int N=strlen(line);
    for(int i=0;i<N;i++)
    {
        if(mrc(line[i])!=line[N-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int pd()
{
    int N=strlen(line);
    for(int i=0;i<N;i++)
    {
        if(line[i]!=line[N-1-i])return 0;
    }
    return 1;
}
int main()
{
    while(scanf("%s",line)==1)
    {
        int p=pd();
        int m=mr();
        if(p==1&&m==1)printf("%s -- is a mirrored palindrome.\n\n",line);
        if(p==0&&m==0)printf("%s -- is not a palindrome.\n\n",line);
        if(p==1&&m==0)printf("%s -- is a regular palindrome.\n\n",line);
        if(p==0&&m==1)printf("%s -- is a mirrored string.\n\n",line);
    }
    return 0;
}
