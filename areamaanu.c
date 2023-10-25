#include<stdio.h>
int main()
{
	int ch,l,w,s,h,b,r;
	float area,pi=3.14;
	
	printf("----manu are following----");
	printf("\n 1 for area of circle \n 2 for area of rectangle \n 3 for area of square \n 4 for area of tringle");
	printf("\n enter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("enter the valu of radius=");
		scanf("%d",&r);
		area=pi*r*r;
		printf("area of circle=%f",area);
		break;
		
		case 2:
		printf("enter the value of length=");
		scanf("%d",&l);
		printf("enter the value of width=");
		scanf("%d",&w);
		area=l*w;
		printf("area of rectangle=%f",area);
		break;
		
		case 3:
		printf("enter the value of side=");
		scanf("%d",&s);
		area=s*s;
		printf("area of squre=%f",area);
		break;
		
		case 4:
		printf("enter the value of length=");
		scanf("%d",&h);
		printf("enter the value of width=");
		scanf("%d",&b);
		area=0.5*h*b;
		printf("area of triangle=%f",area);
		break;
		
		default:
		printf("::enter vaild input::");
		break;
	}
	return 0;
}
