#include<stdio.h>
int main()
{
	int i,j,num[2][2],num1[2][2],result[2][2];
	printf("enter values for 1st array=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	printf("enter values for 2st array=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=num[i][j]-num1[i][j];
		}
	}
		printf("substraction of two array::\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
