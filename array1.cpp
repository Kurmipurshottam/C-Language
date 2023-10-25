#include<stdio.h>
int main()
{
	int i,number[]={100,20,50};
	printf("%d",number[0]);//printing 0th position
	number[1]=200;
	printf("\n%d\n",number[1]);
	for(i=0;i<=2;i++)
	{
		printf("%d ",number[i]);
	}
	return 0;
}
