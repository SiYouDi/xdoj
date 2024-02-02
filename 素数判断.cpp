#include<stdio.h>
int main()
{
	int n;
	int j=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i!=0)
		{
			j++;
		}
	}
	if(j==n-2||n==1)
	{
		printf("%d",n);
	}
	else
	{
		for(int k =2;k<n;k++)
		{
			if(n%k==0)
			{
				printf("%d",k);
				break;
			}
		}
	}
	return 0;
}
