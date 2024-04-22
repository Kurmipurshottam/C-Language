#include<stdio.h>
int main()
{
	int age=22;
	int *ptr=&age;
	printf("%d",age);
	printf("\n%p",ptr); //for pointer %p use the identifiers
	return 0;
}
