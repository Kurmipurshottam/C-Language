#include<stdio.h>
int main()
{
	//swaping using thired variable
	int a,b,c;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("\n-----value before swaping-----");
	printf("\n value of a=%d",a);
	printf("\n value of b=%d",b);
	printf("\n-----value after swaping-----");
	c=a;
	a=b;
	b=c;
	printf("\n value of a=%d",a);
	printf("\n value of b=%d",b);
	return 0;
}
