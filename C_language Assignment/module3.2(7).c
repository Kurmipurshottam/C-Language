#include<stdio.h>
int main()
{
	int n1=0,n2=1;
	int n3=n1+n2;
	int ch,i;
	printf("enter end point=");
	scanf("%d",&ch);
	printf("fibonacci=%d %d %d ",n1,n2,n3);
	for(i=1;i<=ch;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d ",n3);
	}
	return 0;
}
