#include<iostream>
using namespace std;
struct student{
	int rollno;
	string name;
	float per;
};
int main()
{
	struct student s1;
	cout<<"Enter your rollno = ";
	cin>>s1.rollno;
	
	cout<<"Enter your name = ";
	cin>>s1.name;
	
	cout<<"Enter your percentage = ";
	cin>>s1.per;
	cout<<"_______________________________________________\n";
	cout<<"Roll no\t\t";
	cout<<"Name\t\t";
	cout<<"percentage";
	cout<<"\n"<<s1.rollno;
	cout<<"\t\t"<<s1.name;
	cout<<"\t"<<s1.per;
	return 0;
}
