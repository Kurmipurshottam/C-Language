//reverse any number
#include<stdio.h>
int main()
{
	int no,rem=0,rev;
	printf("enter the number=");
	scanf("%d",&no);
	if(no==0)
	{
		printf("::entered number is Zero::");
	}
	else{
		while(no!=0)
		{
			rem=no%10;
			rev=(rev*10)+rem;
			no=no/10;
		}
		printf("number after rever::%d",rev);
		}
	return 0;
}
