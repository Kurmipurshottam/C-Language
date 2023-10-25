#include<stdio.h>
int main()
{
	int a[50],n,i,k,j,count;
	printf("\n Enter the end point =");
	scanf("%d",&n);
	k=n;
	for(i=0;i<n;i++)
	{
		printf("Enter value =");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<k+1;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			printf("uniqe array = %d",a[i]);
		}
	}printf("\n");
	return 0;
}
