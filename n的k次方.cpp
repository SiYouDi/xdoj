#include<stdio.h>
float pow(int n,int k)
{
	if(k==1)
	{
		return n;
	}
	else if(k>1)
	{
		return n*pow(n,k-1);
	}
	else if(k<1)
	{
		return pow(n,k+1)*1.0/n;
	}
	
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	float num = pow(n,k);
	printf("%f",num);
	return 0;
}
