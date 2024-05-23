#include<stdio.h>
int main()
{
	int choice,length,width,height,base;
	float radius,area;
	printf("-----select following-----");
	printf("\npress 1 for circle::");
	printf("\npress 2 for rectangle::");
	printf("\npress 3 for triangle::");
	printf("\n---------------------------\n");
	
	printf("enter your choice=");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("enter the radius of circle=");
		scanf("%f",&radius);
		area=3.14*radius*radius;
		printf("area of circle=%f",area);
	}
	else if(choice==2)
	{
		printf("enter the length of rectangle=");
		scanf("%d",&length);
		printf("enter the width of rectangle=");
		scanf("%d",&width);
		area=length*width;
		printf("area of rectangle=%f",area);
	}
	else if(choice==3)
	{
		printf("enter the height of triangle=");
		scanf("%d",&height);
		printf("enter the base of triangle=");
		scanf("%d",&base);
		area=0.5*height*base;
		printf("area of triangle=%f",area);
	}
	else{
		printf("\n::enter valid input::");
	}
	return 0;
}
