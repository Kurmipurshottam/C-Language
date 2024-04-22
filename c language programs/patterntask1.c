//task 1
//A
//B B
//C C C
//D D D D
//E E E E E
#include<stdio.h>
int main()
{
	int i,j;
	char alphabet='A';
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",alphabet);
		}
		alphabet++;
		printf("\n");
	}
	return 0;
}
