#include<stdio.h>
int main1()
{
	int h,r,n;
	float v;
	n=0;
	scanf("%d %d",&h,&r);
	v=3.14*r*r*h*(1e-3);
	while(n*v<20)
	{
		n++;
	}
	printf("%d",n);
	return 0;
 } 
