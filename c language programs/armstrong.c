#include<stdio.h>
int main()
{
	int org,remainder,result=0,n;
	printf("enter to check armstrong or not = ");
	scanf("%d",&n);
	org=n;
	while(org!=0)
	{
		remainder=org%10;
		result=(remainder*remainder*remainder)+result;
		org=org/10;
	}
	if(result==n)
	{
		printf("%d is an armstrong number::",n);
	}
	else
	{
		printf("%d is not an armstrong number::",n);
	}
	return 0;
}
