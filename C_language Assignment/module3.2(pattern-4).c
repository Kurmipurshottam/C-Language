//*
//* *
//* * *
//* * * *
//* * * * *
//* * * * * *
//* * * * *
//* * * *
//* * *
//* *
//*
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	for(i=5;i>=-5;i--)
	{
		for(j=5;j>=abs(i);j--)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
