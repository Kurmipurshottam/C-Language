#include<stdio.h>
int max(int x[],int y);
int main()
{
	int n,i,num[100],maximum;
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
	maximum=max(num,n);
	printf("\n%d is largest from entered number",maximum);
	return 0;
}
int max(int x[],int y)
{
	int z,i;
	z=x[0];
	for(i=1;i<y;i++)
        {
		if(x[i]>z)
			z=x[i];
	}
	return(z);
}

