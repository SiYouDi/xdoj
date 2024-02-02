#include<stdio.h>
int main1()
{
	int a,b=0;
	scanf("%d %d",&a,&b);
	if(a%b==0)
	{
		printf("yes");
	}
	else
	{
		printf("%d %d",a/b,a%b);
	}
	return 0;
}
