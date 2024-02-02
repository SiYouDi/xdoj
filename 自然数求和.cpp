#include<stdio.h>
int main()
{
	int n,i,j;
	i=0;
	j=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		j+=i;
	}
	printf("%d",j);
	return 0;
}
