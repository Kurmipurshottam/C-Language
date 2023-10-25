#include<stdio.h
int main()
{
	int per;
	printf("enter your percentage=");
	scanf("%d",&per);
	if(per>=80&&per<100)
	{
		printf("Grad-->A+");
	}
	else if(per>=70&&per<80)
	{
		printf("Grad-->A");
	}
	else if(per>=55&&per<70)
	{
		printf("Grad-->B");
	}
	else if(per>=35&&per<55)
	{
		printf("Grad-->Pass");
	}
	else if(per<35&&per>0)
	{
		printf("Grad-->Fail");
	}
	else
	{
		printf("Invalid percentage");
	}
	return 0;
}
