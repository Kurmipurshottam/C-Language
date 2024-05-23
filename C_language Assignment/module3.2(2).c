#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter number one=");
	scanf("%d",&no1);
	printf("enter number two=");
	scanf("%d",&no2);
	printf("\n-----before swaping-----");
	printf("\nnumber 1=%d",no1);
	printf("\nnumber 2=%d",no2);
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;
	printf("\n-----after swaping-----");
	printf("\nnumber 1=%d",no1);
	printf("\nnumber 2=%d",no2);
}
