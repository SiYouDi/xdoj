#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int max=a>b?a:b;
	int min=a>b?b:a;
	int num1=0;
	int num2=0;
	int num3=0;
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
	int m1=num1<num2?num1%num2:num2%num1;
	int m2=num1<num3?num1%num3:num3%num1;
	int m3=num3<num2?num3%num2:num2%num3;
	if(m1>m2&&m1>m3)
		printf("%d",m1);
	else if(m2>m1&&m2>m3)
		printf("%d",m2);
	else
		printf("%d",m3);
	return 0;
}
