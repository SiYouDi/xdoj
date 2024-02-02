#include<stdio.h>
int main()
{
	int n,j=0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		if(i%8==0)
		{
			printf("%d ",i);
		}
		if(i%2==0)
		{
			j+=i;
		}
	}
	printf("\n%d",j);
	return 0;
}
