#include<stdio.h>
int demo();
int main()
{
	demo();
	printf("\n hello main function");
	demo();
	return 0;
}
int demo()
{
	printf("\n hello demo function");
	return 0;
}
