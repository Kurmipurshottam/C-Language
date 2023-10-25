#include<stdio.h>
int multi(int a);
int main()
{
	int n;
	printf("enter number=");
	scanf("%d",&n);
	int result=multi(n);
	printf("%d is multi",result);
	return 0;
}
int multi(int a)
{
	if(a>=1)
	{
		return a*multi(a-1);
	}
	else{
		return 1;
	}
}
