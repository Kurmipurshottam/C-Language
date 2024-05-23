#include<stdio.h>
int main()
{
    int d,days,day,y,years,year,choice;
    printf("-----select following-----");
	printf("\npress 1 for converting days into years::");
	printf("\npress 2 for converting years into days::");
	printf("\n---------------------------\n");
	
	printf("enter your choice=");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("enter the days=");
		scanf("%d",&days);
		year=days/365;
		day=days%365;
		printf("%d days after converting %d years and %d day",days,year,day);
	}
	else if(choice==2)
	{
		printf("enter the years=");
		scanf("%d",&years);
		days=years*365;
		printf("%d years after converting %d days",years,days);
	}
	else
	{
		printf("::enter valid choice::");
	}
	return 0;
}
