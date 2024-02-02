#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,money;
	scanf("%d",&money);
	a=money/100;
	b=(money-a*100)/50;
	c=(money-a*100-b*50)/20;
	d=(money-a*100-b*50-c*20)/10;
	e=(money-a*100-b*50-c*20-d*10)/5;
	f=money-a*100-b*50-c*20-d*10-e*5;
	printf("%d %d %d %d %d %d",a,b,c,d,e,f);
	return 0;
}
