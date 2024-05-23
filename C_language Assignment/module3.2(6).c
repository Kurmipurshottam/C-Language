#include<stdio.h>
int main()
{
	int i,ch,factorial=1;
	printf("enter your number=");
	scanf("%d",&ch);
	for(i=ch;i>0;i--)
	{
		factorial=factorial*i;
	}
	printf("\nfactorial of %d is=%d",ch,factorial);	
	return 0;
}
