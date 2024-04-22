#include<stdio.h>
int main()
{
	int i,ch,count=0;
	printf("enter your end point::");
	scanf("%d",&ch);
	for(i=1;i<=ch;i++)
	{
		if(ch%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("::it is a prime number::");
	}
	else{
		printf("::it is not a prime number::");
	}
	return 0;
}
