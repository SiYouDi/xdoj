#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num1=0,num2=0,num3=0;
	for(int i =n;i<=n*n;i++)
	{
		if(i%2!=0)
			num1++;
		if(i%2==0)
			num2++;
		if(i%4==0&&i%3!=0)
			num3++;
	}
	printf("%d %d %d\n",num1,num2,num3);
	int sum1=num1+num2;
	int sum2=num1+num3;
	int sum3=num2+num3;
	if(sum1>=sum2&&sum1>=sum3)
		printf("%d",sum1);
	else if(sum2>=sum1&&sum2>=sum3)
		printf("%d",sum2);
	else if(sum3>=sum2&&sum3>=sum1)
		printf("%d",sum3);
	return 0;
}
