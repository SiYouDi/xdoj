#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum1=0;
	int sum2=0;
	for(int i =1;i<=n;i++)
	{
		if(i%2==1)
			sum1+=i;
		else
			sum2+=i;
	}
	printf("%d %d",sum1,sum2);
	return 0;
}
