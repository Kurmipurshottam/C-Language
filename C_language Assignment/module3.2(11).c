#include<stdio.h>
int main()
{
	int no,lastdigit,firstdigit;
	printf("enter number that you get the sum of last and first degit::");
	scanf("%d",&no);
	lastdigit=no%10;//lastdigit=123%10=3 so last digit=3
	firstdigit=no;
	while(no>=10)
	{
		no=no/10;//first no=123 so 123/10=12 now check 12>=10 true again 12/10=1 so firstdigit=1
	}
	firstdigit=no;
	printf("sum of last and first digit=%d",lastdigit+firstdigit);
	return 0;
}
