#include<stdio.h>
int main()
{
	int age;
	printf("enter the age=");
	scanf("%d",&age);
	if(age<18)
	{
		printf("not eligeable::");
	}
	else{
		printf("eligeable::");
	}
	return 0;
}
