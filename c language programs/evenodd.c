#include<stdio.h>
int main()
{
	int number;
	printf("enter the number=");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("::entered number is even::");
	}
	else
	{
		printf("::entered number is odd::");
	}
	return 0;
}
