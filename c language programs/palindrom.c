//palindrom number 111 is a palindrom number
#include<stdio.h>
int main()
{
	int no,rem=0,rev,real;
	printf("enter the number=");
	scanf("%d",&no);
	real=no;
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
		if(real==rev)
		{
			printf("::number is palindrom::");
		}
		else
		{
			printf("::number is not palindrom::");
		}
	}
	return 0;
}
