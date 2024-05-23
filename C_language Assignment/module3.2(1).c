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
	switch(choice)
	{
		case 1:
			printf("enter the number one::");
			scanf("%d",&no1);
			
			printf("enter the number two::");
			scanf("%d",&no2);
			
			ans=no1+no2;
		 	printf("\n%d+%d=%d",no1,no2,ans);
		 	break;
	 		
		case 2:
			printf("enter the number one::");
			scanf("%d",&no1);
			
			printf("enter the number two::");
			scanf("%d",&no2);
			
			ans=no1-no2;
			printf("\n%d-%d=%d",no1,no2,ans);
			break;
		
		case 3:
			printf("enter the number one::");
			scanf("%d",&no1);
			
			printf("enter the number two::");
			scanf("%d",&no2);
			
			ans=no1*no2;
			printf("\n%d*%d=%d",no1,no2,ans);
			break;
		
		case 4:
			printf("enter the number one::");
			scanf("%d",&no1);
			
			printf("enter the number two::");
			scanf("%d",&no2);
			
			ans=no1/no2;
			printf("\n%d/%d=%d",no1,no2,ans);
			break;
		
		case 5:
			printf("enter the number one::");
			scanf("%d",&no1);
			
			printf("enter the number two::");
			scanf("%d",&no2);
			
			ans=no1%no2;
			printf("\n%d%%%d=%d",no1,no2,ans);
			break;
		
		default:
			printf("\n::enter valid input::");	
			break;	
	}
	return 0;
}

