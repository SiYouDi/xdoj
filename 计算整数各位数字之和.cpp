#include<stdio.h>
int main()
{
	int n,num,i,sum;
	scanf("%d",&n);
	sum=0;
	for(i=0;i<10;i++)
	{
		if(n/1>=1)
		{
			num=n%10;
			sum+=num;
			n/=10;
		}
	}
	printf("%d",sum);
	return 0;
}
