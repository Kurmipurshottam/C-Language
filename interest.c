#include<stdio.h>
int main()
{
	float p,r,n,interest;
	printf("enter the principle amount=");
	scanf("%f",&p);
	
	printf("enter the rate of interest=");
	scanf("%f",&r);
	
	printf("enter the time=");
	scanf("%f",&n);
	
	interest=p*r*n/100;
	printf("simple interest=%f",interest);
	return 0;
}
