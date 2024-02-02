#include<stdio.h>
int tower(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n>1)
	{
		return 1+2*tower(n-1);
	}
}
int  main()
{
	int n;
	scanf("%d",&n);
	int num=tower(n);
	printf("%d",num);
	return 0;
}
