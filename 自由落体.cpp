#include<stdio.h>
int main()
{
	int t;
	float h,g=9.8;
	scanf("%d",&t);
	h=1000-0.5*g*t*t;
	if(h<=0)
	{
		h=0;
	}
	printf("%.2f",h);
	return 0;
}
