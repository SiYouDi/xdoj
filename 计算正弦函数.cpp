#include<stdio.h>
#include<math.h>
float pows(int n)
{
	int i =0;
	float num=1;
	for(i=1;i<=n;i++)
	{
		num*=i;
	}
	return num;
}
int main()
{
	int n;
	float x;
	float num=0;
	scanf("%d %f",&n,&x);
	for(int i =1;i<=n;i++)
	{
		float p1=pow(x,2*i-1);
		float p2=pows(2*i-1);
		float p3=pow(-1,i+1);
		num=num+(p1/p2)*p3;
	}
	printf("%.4f",num);
	return 0;
}
