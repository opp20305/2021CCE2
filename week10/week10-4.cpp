#include<stdio.h>
#include<vector>
#include<algorithm>
class Student
{
    public:
    char name[30];
    int g;
};
///Student student[100];
bool compare(Student a,Student b)
{
    return(a.g > b.g);
}
int main()
{
    FILE * fin = fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);

    std::vector<Student>student(20);
    for(int i=0;i<20;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].g);
    }
    std::sort(student.begin(),student.end(),compare);
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",student[i].name,student[i].g);
    }
}
