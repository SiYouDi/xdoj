#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int i =1;
	double num=1;
	for(i=1;i<=n;i++)
	{
		num=num*i;
	}
	printf("%f",num);
	return 0;
}
