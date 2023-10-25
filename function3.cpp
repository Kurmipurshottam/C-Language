#include<stdio.h>
int demo(int x,int y);
int main()
{
	printf("%d",demo(2,3));
	return 0;
}
int demo(int x,int y)
{
	return (x+y);
}
