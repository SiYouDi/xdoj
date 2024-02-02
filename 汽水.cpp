#include<stdio.h>
int main()
{
	int n;
	int num=0;;
	scanf("%d",&n);
	num=n;
	while(n>1)
	{
		num+=n/2;
		n=n/2+n%2;
	}
	printf("%d",num);
	return 0;
}
