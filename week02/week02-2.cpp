#include<stdio.h>
char word1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char word2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror(char c)
{
    for(int i=0; word1[i]!=0;i++)
    {
        if(c==word1[i])return word2[i];
    }
    return' ';
}
int main()
{
    char c;
    scanf("%c",&c);
    printf("√Ëπ≥¶r¨∞-- %c --\n",mirror(c));
    return 0;
}
