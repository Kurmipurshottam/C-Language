#include<stdio.h>
int main()
{
	int en,i,ch;
	printf("enter your choice=");
	scanf("%d",&ch);
	for(i=1;i<=ch;i++)
	{
		if(i%2!=0)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}

