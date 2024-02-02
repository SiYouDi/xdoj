#include<stdio.h>
int main()
{
	int m,n,max,min,x,y,i;
	scanf("%d %d",&m,&n);
	x=m>=n?m:n;
	y=m<=n?m:n;
	while(x!=y)
	{
		if(x>y)
		{
			x-=y;
		}
		else
		{
			y-=x;
		}
	}
	max=x;
	x=m>=n?m:n;
	y=m<=n?m:n;
	for(i=1;i<=y;i++)
	{
		
		if((x*i)%y==0)
		{
			min=x*i;
			break;
		}
	}
	printf("最大公约数为：%d\n最小公倍数为：%d",max,min);
	return 0;
}
