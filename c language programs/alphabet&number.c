#include<stdio.h>
int main()
{
	char input;
	printf("enter your input=");
	scanf("%c",&input);
	if((input>='a'&&input<='z')||(input>='A'&&input<='Z'))
	{
		printf("::your input is an alphabet::");
	}
	else if(input>='0'&&input<='9')
	{
		printf("::your input is an number::");
	}
	else
	{
		printf("::your input is not an alphabet or not a number::");
	}
	return 0;
}
