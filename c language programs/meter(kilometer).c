#include<stdio.h>
int main()
{
	float kilometers,meter;
	printf("enter the kilometers=");
	scanf("%f",&kilometers);
	meter=kilometers*1000.0;
	printf("%f kilometers after converting %f meter",kilometers,meter);
	return 0;
}
