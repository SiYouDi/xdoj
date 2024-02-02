#include<stdio.h>
int main2()
{
	int a,b,c,d,e,f;
	e,f=0;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	a=a*60;
	c=c*60;
	a=a+b;
	c=c+d;
	a=c-a;
	b=a;
	while(a/60>=1)
	{
		e++;
		a-=60;
	}
	f=b-e*60;
	printf("%d %d",e,f);
	return 0;
}
