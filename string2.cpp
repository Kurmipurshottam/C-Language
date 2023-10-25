#include<stdio.h>
int main()
{
	int i;
	char name[]={"purshottam"};
//	char name[]={'p','u','r','s','h','o','t','t','a','m'};
	name[3]='n';
	printf("%c\n",name[0]);//printing charcter with position
	for(i=0;i<10;i++)
	{
		printf("%c",name[i]);
	}
	return 0;
}
