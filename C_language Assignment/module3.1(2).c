#include<stdio.h>
int main()
{
	int no1,no2,ans,choice;
	
	printf("-----select following-----");
	printf("\npress 1 for addition::");
	printf("\npress 2 for substraction::");
	printf("\npress 3 for multiplication::");
	printf("\npress 4 for division::");
	printf("\npress 5 for modulo::");
	printf("\n---------------------------\n");
	
	printf("enter your choice=");
	scanf("%d",&choice);
	
	if(choice==1||choice==2||choice==3||choice==4||choice==5)
	{
		printf("enter the number one::");
		scanf("%d",&no1);
		
		printf("enter the number two::");
		scanf("%d",&no2);
	}
	if(choice==1)
	{
		ans=no1+no2;
	 	printf("\n%d+%d=%d",no1,no2,ans);
	}
	else if(choice==2)
	{
		ans=no1-no2;
		printf("\n%d-%d=%d",no1,no2,ans);
	}
	else if(choice==3)
	{
		ans=no1*no2;
		printf("\n%d*%d=%d",no1,no2,ans);
	}
	else if(choice==4)
	{
		ans=no1/no2;
		printf("\n%d/%d=%d",no1,no2,ans);
	}
	else if(choice==5)
	{
		ans=no1%no2;
		printf("\n%d%%%d=%d",no1,no2,ans);
	}
	else{
		printf("\n::enter valid input::");
	}
	return 0;
}
