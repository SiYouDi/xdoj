#include<stdio.h>
#include<math.h>
float sum(int i)
{
	int sum=1;
	for(int j =1;j<=i;j++)
	{
		sum*=j;
	}
	return sum;
}
int main()
{
	int n;
	float x;
	scanf("%d %f",&n,&x);
	float sinx;
	for(int i=1;i<=n;i++)
	{
		sinx+=pow(-1,i+1)*pow(x,2*i-1)/sum(2*i-1);
	}
	printf("%.4f",sinx);
	return 0;
}
