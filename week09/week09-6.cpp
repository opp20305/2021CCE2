#include<stdio.h>
#include<string.h>
char stra[]="ABC";
char strb[]="ABCD";
int main()
{
	int c=strcmp("B","C");
	printf("B - C 得到 %d\n",c);
	c=strcmp(stra,strb);
	printf("%s %s 得到 %d\n",stra,strb,c);
}
