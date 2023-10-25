#include<stdio.h>
int main()
{
	int maths,english,science,total;
	float avg,per;
	printf("enter the mark of maths=");
	scanf("%d",&maths);
	printf("enter the mark of science=");
	scanf("%d",&science);
	printf("enter the mark of english=");
	scanf("%d",&english);
	total=maths+science+english;
	printf("total=%d",total);
	avg=total/3;
	printf("\navg=%f",avg);
	per=total*100/300;
	printf("\nper=%f",per);
	return 0;
}
