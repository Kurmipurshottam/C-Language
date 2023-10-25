//task 1
//A
//B C
//D E F
//G H I J
#include<stdio.h>
int main()
{
	int i,j,alphabet='A';
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",alphabet);
			alphabet++;
		}
		printf("\n");
	}
	return 0;
}
