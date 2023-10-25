#include<stdio.h>
int main()
{
	int maths,english,hindi,total;
	float per;
	char grade;
	printf("---manu are as follow---\n");
	printf("A+ for per>80\n");
	printf("B for per>65\n");
	printf("pass for per>35\n");
	printf("fail for per>0 && per<35\n");
	printf("---------------------------\n");
	printf("enter the maths marks=");
	scanf("%d",&maths);
	printf("enter the english marks=");
	scanf("%d",&english);
	printf("enter the hindi marks=");
	scanf("%d",&hindi);
	total=maths+english+hindi;
	per=total/3;
	printf("total=%d",total);
	printf("\npercentage=%f",per);
	if(per>80)
	{
		grade='a';
	}
	else if(per>65)
	{
		grade='b';
	}
	else if(per>35)
	{
		grade='c';
	}
	else if(per>0&&per<35)
	{
		grade='d';
	}
	else
	{
		printf("\n::invalid input::");
	}
	switch(grade)
	{
		case 'a':
			printf("\ngrade-->A+");
			break;
		case 'b':
			printf("\ngrade-->B");
			break;
		case 'c':
			printf("\npass");
			break;
		case 'd':
			printf("\nfail");	
			break;
		default:
			printf("\n::invalid input::");	
	}
	return 0;
}
