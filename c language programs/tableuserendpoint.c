#include<stdio.h>
int main()
{
	int i,no;
	printf("\n enter your no=");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",no,i,no*i);
	}
	return 0;
}
