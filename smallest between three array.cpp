#include<stdio.h>
int main()
{
	int n,i,num[100];
	printf("how many elements you want to enter=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elements=");
		scanf("%d",&num[i]);	
	}
	printf("entered elements are as under::");
	for(i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(num[0]>num[i])
		{
			num[0]=num[i];
		}
	}
	printf("\n%d is smallest from entered number");
	return 0;
}
