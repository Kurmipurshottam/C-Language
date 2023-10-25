#include<stdio.h>
int main()
{
	int no1,no2,no3;
	printf("enter number one=");
	scanf("%d",&no1);
	printf("enter number two=");
	scanf("%d",&no2);
	printf("enter number three=");
	scanf("%d",&no3);
	if(no1>no2&&no1>no3)
	{
		printf("::number one is lagrgest number between them::");
	}
	else if(no2>no1&&no2>no3)
	{
		printf("::number two is lagrgest number between them::");
	}
	else
	{
		printf("::number three is lagrgest number between them::");
	}
	return 0;
}
