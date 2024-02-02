#include<stdio.h>
int main()
{
	int n,p,m,max,min;
	p=0;
	max=1;
	min=9;
	scanf("%d",&n);
	if(n==0)
	{
		max=0;
		min=0;
		p=1;
	}
	while(n>=1)
	{
		m=n%10;
		n/=10;
		p++;
		if(m>=max)
		{
			max=m;
		}
		if(m<=min)
		{
			min=m;
		}
	}
	printf("%d %d %d",p,max,min);
	return 0;
}
