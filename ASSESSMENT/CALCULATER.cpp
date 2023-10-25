#include<stdio.h>
void Addition(int a,int b)
{
	printf("%d + %d = %d",a,b,a+b);
}
void Substraction(int a,int b)
{
	printf("%d - %d = %d",a,b,a-b);
}
int Multiplication(int a,int b)
{
	return (a*b);
}
int Division(int a,int b)
{
	return (a/b);
}
int main()
{
	int no1,no2,choice,i;
	printf("-------menu-------");
	printf("\n1.Addition");
	printf("\n2.Substraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n-------------------");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			for(i=0;i<1;i++)
			{
				printf("Enter number one = ");
				scanf("%d",&no1);
				printf("Enter number two = ");
				scanf("%d",&no2);
			}
			Addition(no1,no2);
			break;
			
		case 2:
			for(i=0;i<1;i++)
			{
				printf("Enter number one = ");
				scanf("%d",&no1);
				printf("Enter number two = ");
				scanf("%d",&no2);
			}
			Substraction(no1,no2);
			break;
			
		case 3:
			for(i=0;i<1;i++)
			{
				printf("Enter number one = ");
				scanf("%d",&no1);
				printf("Enter number two =");
				scanf("%d",&no2);
			}
			printf("%d * %d = %d",no1,no2,Multiplication(no1,no2));
			break;
			
		case 4:
			for(i=0;i<1;i++)
			{
				printf("Enter number one = ");
				scanf("%d",&no1);
				printf("Enter number two = ");
				scanf("%d",&no2);
			}
			printf("%d / %d = %d",no1,no2,Division(no1,no2));
			break;
			
		default:
			printf("Please Enter valid choice !!!!");
			break;
	}
	return 0;
}
