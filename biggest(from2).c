#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first value=");
	scanf("%d",&a);
	printf("enter the second value=");
	scanf("%d",&b);
	if(a>b)
	{
		printf("::a is biggest then b::");
	}
	else{
		printf("::b is biggest then a::");
	}
	return 0;
}
