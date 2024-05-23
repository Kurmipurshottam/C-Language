#include<stdio.h>
int main()
{
	int i,number,count=0;
	printf("Enter Ten number=");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&number);
		if(number%2==0)
		{
			count=count+number;
		}
	}
	printf("sum of even number is=%d",count);
	return 0;
}
