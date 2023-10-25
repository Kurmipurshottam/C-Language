#include<stdio.h>
int main()
{
	int x1,x2,y1,y2,ans;
	printf("enter the value=");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	ans=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf("\nans=%d",ans);
	return 0;
}
