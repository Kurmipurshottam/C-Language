#include<stdio.h>
int main()
{
	int days,day,years;
	printf("enter the days=");
	scanf("%d",&days);
	years=days/365;
	day=days%365;
	printf("%d days after converting %d years and %d day",days,years,day);
	return 0;
}
