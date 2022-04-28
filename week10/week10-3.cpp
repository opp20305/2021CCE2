#include<stdio.h>
#include<string.h>
class Student
{
    public:
    char name[30];
    int g;
};
Student student[100];
int main()
{
    FILE * fin = fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    for(int i=0;i<20;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].g);
    }
    for(int k=0;k<n-1;k++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(student[i].g<student[i+1].g)
            {
                Student t=student[i];
                student[i]=student[i+1];
                student[i+1]=t;
            }
        }
    }
    for(int i=0;i<20;i++)
    {
        printf("%s %d\n",student[i].name,student[i].g);
    }
}
