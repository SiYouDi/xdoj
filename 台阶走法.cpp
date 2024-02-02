#include<stdio.h>
int post(int n)
{
	int sum=0;
	if(n>2)
		sum=post(n-1)+post(n-2);
	else if(n==2||n==1)
		sum=1;	
	return sum;
}
int main()
{
	int n,sum=0;
	int* p=&sum;
	scanf("%d",&n);
	sum=post(n);
	printf("%d",sum);
	return 0;
}
