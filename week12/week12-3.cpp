#include<iostream>
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
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>stu[i].name;
		std::cin>>stu[i].g;
	}
	for(int i=0;i<n;i++)
	{
		std::cout<<stu[i].name<<" ";
		std::cout<<stu[i].g<<"\n";
	}
	return 0;
}
