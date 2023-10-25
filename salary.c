#include<stdio.h>
int main()
{
	int day,salary,ans;
	printf("enter the day=");
	scanf("%d",&day);
	printf("enter per day salary=");
	scanf("%d",&salary);
	ans=salary*day;
	printf("salary=%d",ans);
	return 0;
}
