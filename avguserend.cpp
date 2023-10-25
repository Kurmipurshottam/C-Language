#include<stdio.h>
int main()
{
	int i,ch,sum=0;
	float avg;
	printf("\n enter your choice=");
	scanf("%d",&ch);
	for(i=1;i<=ch;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
		avg=sum/ch;
	}
	printf("sum of numbers=%d",sum);
	printf("\navg of numbers=%f",avg);
	return 0;
}
