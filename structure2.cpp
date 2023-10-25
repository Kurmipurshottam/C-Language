#include<stdio.h>
struct student{
	int rollno;
	float pr;
	char name[100];	
};
int main()
{
	struct student s1[100];
	int n,i;
	printf("enter how many student details you went to enter?=");
	scanf("%d",&n);
	printf("enter name rollno and percentage for %d students\n",n);
	for(i=0;i<n;i++)
	{
		printf("enter value for %d student\n",i+1);
		printf("roll no:");
		scanf("%d",&s1[i].rollno);
		printf("pr:");
		scanf("%f",&s1[i].pr);
		printf("name:");
		scanf("%s",&s1[i].name);
	}
	for(i=0;i<n;i++)
	{
		printf("details of student %d\n",i+1);
		printf("%d is rollno %s is name %f is percentage\n",s1[i].rollno,s1[i].name,s1[i].pr);
	}
	return 0;
}
