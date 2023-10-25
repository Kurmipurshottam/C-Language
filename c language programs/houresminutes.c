#include<stdio.h>
int main()
{
	int houres,minutes;
	printf("enter the houres=");
	scanf("%d",&houres);
	minutes=houres*60;
	printf("%d houres after converting %d minutes",houres,minutes);
	return 0;
}
