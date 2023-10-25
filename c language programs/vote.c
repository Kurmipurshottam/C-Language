#include<stdio.h>
int main()
{
	int age;
	printf("enter the age=");
	scanf("%d",&age);
	if(age>18)
	{
		printf("::he is eligible for vote::");
	}
	else{
		printf("::he is not eligible for vote::");
	}
	return 0;
}
