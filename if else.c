#include<stdio.h>
int main()
{
	int per;
	printf("enter the percentage=");
	scanf("%d",&per);
	if(per<35)
	{
		printf("student fail::");
	}
	else{
		printf("student pass::");
	}
	return 0;
}
