#include<stdio.h>
int main()
{
	char letter;
	printf("enter the charcater=");
	scanf("%c",&letter);
	
	if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||
		letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U')
	{
		printf("::entered charcater is vowel::");
	}
	else
	{
			printf("::entered charcater is consonant::");
	}
	return 0;
}
