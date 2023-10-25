#include<stdio.h>
int main()
{
	int age;
	printf("enter the age=");
	scanf("%d",&age);
	if(age>=18)
	{
		if(age==18)
		{
			printf("eligeable for learning licence::");
		}
		else{
			printf("eligeable for driving licence::");
		}
	}
	else {
		printf(" not eligeable::");
	}
	return 0;
}
