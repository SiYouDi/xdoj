#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	scanf("%d %d",&a,&b); 
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	c=max%min;
	while(c!=0&&c!=1)
	{
		max=min;
		min=c;
		c=max%min;
	}
	if(c==1)
	{
		printf("1");	
	}
	if(c==0)
	{
		printf("%d",min);
	}
	return 0;
}
