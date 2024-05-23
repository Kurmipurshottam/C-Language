#include<stdio.h>
int main()
{
	int choice;
	printf("----------menu----------");
	printf("\n1 for Monday");
	printf("\n2 for Tuesday");
	printf("\n3 for Wednesday");
	printf("\n4 for Thrusday");
	printf("\n5 for Friday");
	printf("\n6 for Saturday");
	printf("\n7 for Sunday");
	printf("\n------------------------");
	printf("\nenter your choice=");
	scanf("%d",&choice);	
	switch(choice)
	{
		case 1:
			printf("\n Monday");
			break;
	
		case 2:
			printf("\n Tuesday");
			break;
	
		case 3:
			printf("\n Wednesday");
			break;
	
		case 4:
			printf("\n Thrusday");
			break;
			
		case 5:
			printf("\n Friday");
			break;
			
		case 6:
			printf("\n Saturday");
			break;
			
		case 7:
			printf("\n Sunday");
			break;	
			
		default:
			printf("\n Enter valid input");
			break;	
	}
}
