//task 1
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5
#include<stdio.h>
int main()
{
	int i,j,no=1;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",no);
		}
		no++;
		printf("\n");
	}
	return 0;
}
