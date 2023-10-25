#include<stdio.h>
int main()
{
	int number;
	printf("enter the number=");
	scanf("%d",&number);
	if(number>0)
	{
		printf("::entered number is positive::");
	}
	else if(number<0)
	{
		printf("::entered number is negative::");
	}
	else
	{
		printf("::entered number is zero::");
	}
	return 0;
}
