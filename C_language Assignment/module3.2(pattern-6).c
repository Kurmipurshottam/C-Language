//A
//AB
//ABC
//ABCD
//ABCDE
#include<stdio.h>
int main()
{
	int i,j;
	char ch='A';
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",j+ch);
		}
		printf("\n");		
	}
	return 0;
}
