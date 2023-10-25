#include<stdio.h>
int main()
{
	//swaping without thired variable
	int a,b;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("\n-----value before swaping-----");
	printf("\n value of a=%d",a);
	printf("\n value of b=%d",b);
	printf("\n-----value after swaping-----");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n value of a=%d",a);
	printf("\n value of b=%d",b);
	return 0;
}
