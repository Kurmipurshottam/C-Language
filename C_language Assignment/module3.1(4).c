#include<stdio.h>
int main()
{
	int p,r,n,interest;
	printf("enter the principaal amount=");
	scanf("%d",&p);
	printf("enter the rate of interest=");
	scanf("%d",&r);
	printf("enter the time of period in year=");
	scanf("%d",&n);
	interest=p*r*n/100;
	
	
	printf("simple interest=%d",interest);
	return 0;
}
