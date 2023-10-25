#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	float pr;
	char name[100];	
};
int main()
{
	struct student s1;
	struct student s2;
//	take input from use
	printf("enter rollno,name and pr");
	scanf("%d %s %f",&s1.rollno,&s1.name,&s1.pr);
//	update the value bydefault
	s1.rollno=8;
	strcpy(s1.name,"raj");
	printf("%d %f %s",s1.rollno,s1.pr,s1.name);
//	copy s1-->s2
	s2=s1;
	//printf("\nstr2:%d %f %s",s2.rollno,s2.pr,s2.name);
	return 0;
}
