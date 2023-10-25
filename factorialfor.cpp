#include<stdio.h>
int main()
{
	int i,ch,factorial=1;
	printf("enter your choice=");
	scanf("%d",&ch);
	for(i=ch;i>0;i--)
	{
		factorial=factorial*i;
	}
	printf("\n%d",factorial);	
	return 0;
}
