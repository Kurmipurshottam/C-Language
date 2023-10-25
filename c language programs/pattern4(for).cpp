/* print alphabate A to Z in a pattern as user want to print a row
*/
#include<stdio.h>
int main()
{
	int i,j,ch;
	char cha='A';
	printf("how many charcter you want from A to Z=");
	scanf("%d",&ch);
	for(i=0;i<ch;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",cha++);
		}
		printf("\n");
	}
	
	return 0;
}
