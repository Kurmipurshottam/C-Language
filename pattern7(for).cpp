/*
print that pattern in c language
  1
 44
999
*/
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(k=3-i;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

