#include<stdio.h>
int factorial(int n)
{
	if(n>=1)
	{
		return n*factorial(n-1);	
	}
	else{
		return 1;
	}
}
int main()
{
	int no;
	printf("enter that number you want factorial = ");
	scanf("%d",&no);
	printf("%d factorial is = %d",no,factorial(no));
	return 0;
}
