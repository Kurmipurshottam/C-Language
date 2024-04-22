#include<stdio.h>
int main()
{
	int i,ch;
	printf("enter your choice=");
	scanf("%d",&ch);
	for(i=1;i<=ch;i++)
	{
		if(i%7==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
