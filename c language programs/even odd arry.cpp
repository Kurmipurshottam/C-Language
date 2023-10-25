#include<stdio.h>
int main()
{
	int i,no[100],n;
	printf("enter your  elements = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter your array elements = ");
		scanf("%d",&no[i]);
	}
	printf("\nthe elemts of array = ");
	for(i=1;i<=n;i++)
	{
		printf("\t%d",no[i]);
	}
	printf("\nthe elements of even = ");
	for(i=1;i<=n;i++)
	{
		if(no[i]%2==0)
		{
			printf("\t%d",no[i]);
		}
	}
	printf("\nthe elements of odd = ");
	for(i=1;i<=n;i++)
	{
		if(no[i]%2!=0)
		{
			printf("\t%d",no[i]);
		}
	}
	return 0;
}
