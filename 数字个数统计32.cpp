#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int max,min;
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	int num1=0,num2=0,num3=0;
	int maxnum=0;
	int minnum=max;
	for(int i =min;i<=max;i++)
	{
		if(i%3==0)
			num1++;
		if(i%4==0)
			num2++;
		if(i%5==0&&i%2!=0)
			num3++;
	}
	printf("%d %d %d\n",num1,num2,num3);
	int sum=num1+num2+num3;
	if(num1>num2&&num1>num3)
		maxnum=num1;
	else if(num2>num1&&num2>num3)
		maxnum=num2;
	else if(num3>num1&&num3>num2)
		maxnum=num3;
	if(num1<num2&&num1<num3)
		minnum=num1;
	else if(num2<num1&&num2<num3)
		minnum=num2;
	else if(num3<num1&&num3<num2)
		minnum=num3;
	int mid=sum-maxnum-minnum;
	printf("%d",mid%max);
	return 0;
}
