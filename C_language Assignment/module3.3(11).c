#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[100];
	float per;
};
union student1{
	int rollno;
	char name[100];
	float per;
};
int main()
{
	struct student s1={1,"xyz",55};
	union student1 u1;
	printf("%d %s %f",s1.rollno,s1.name,s1.per);
	u1.rollno=5;
	printf("\n%d",u1.rollno);
	strcpy(u1.name,"abc");
	printf(" %s",u1.name);
	u1.per=90;
	printf(" %f",u1.per);
	printf("\n %d is size of structure",sizeof(s1));
	printf("\n %d is size of union",sizeof(u1));
	return 0;
}
