#include<stdio.h>
#include<vector>
#include<algorithm>
class Student
{
    public:
    char name[30];
    int g;
};
bool compare(Student a,Student b)
{
    return(a.g > b.g);
}
int main()
{
    int n;
    scanf("%d",&n);

    std::vector<Student>student(n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",student[i].name,&student[i].g);
    }
    std::stable_sort(student.begin(),student.end(),compare);
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",student[i].name,student[i].g);
    }
}
