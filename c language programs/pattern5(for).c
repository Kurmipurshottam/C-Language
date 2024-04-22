/* print number 1 to user end in a pattern as user want to print a row
*/
#include<stdio.h>
int main()
{
	int i,j,ch,cha=1;
	printf("how many number you want =");
	scanf("%d",&ch);
	for(i=0;i<ch;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",cha++);
		}
		printf("\n");
	}
	return 0;
}
