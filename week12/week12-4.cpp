#include<iostream>
using namespace std;
class Student
{
	public:
	char name[30];
	int g;
};
Student stu[100];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].g;
	}
	for(int i=0;i<n;i++)
	{
		cout<<stu[i].name<<" "<<stu[i].g<<endl;
	}
	return 0;
}
