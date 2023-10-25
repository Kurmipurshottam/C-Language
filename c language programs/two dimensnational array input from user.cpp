#include<stdio.h>
int main()
{
	int i,j,num[2][5];
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("enter number=");
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}

