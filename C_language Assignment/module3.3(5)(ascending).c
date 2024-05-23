#include<stdio.h>
int main()
{
	int n,i,j,no[100],temp;
	printf("how many value you want to enter=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter values=");
		scanf("%d",&no[i]);
	}
	printf("\n---before assending---");
	for(i=0;i<n;i++)
	{
		printf("\n%d",no[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(no[i]>no[j])
			{
				temp=no[i];
				no[i]=no[j];
				no[j]=temp;
			}
		}
	}
	printf("\n---after assending---");
	for(i=0;i<n;i++)
	{
		printf("\n%d",no[i]);
	}
	return 0;
}
