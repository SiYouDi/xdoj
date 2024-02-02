#include<math.h>
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d",&m);
	n=sqrt(m);
	if(n*n==m)
	{
		printf("%d",n);	
	}
	else
	{
		printf("no");
	}
	return 0;
}
