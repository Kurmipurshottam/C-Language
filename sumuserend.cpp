#include<stdio.h>
int main()
{
	int i,ch,sum=0;
	printf("\n enter your choice=");
	scanf("%d",&ch);
	for(i=1;i<=ch;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("sum of numbers=%d",sum);
	return 0;
}
