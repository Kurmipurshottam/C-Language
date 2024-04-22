#include<stdio.h>
int main()
{
	int num[50],i,no;
	printf("enter how many values you want to enter::");
	scanf("%d",&no);
	printf("enter %d values=",no);
		
	for(i=0;i<no;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<no;i++)
	{
		printf("%d\t",num[i]);
	}
	return 0;
}
