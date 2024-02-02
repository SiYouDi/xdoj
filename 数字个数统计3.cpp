#include<stdio.h>
int main()
{
	int numA,numB;
	scanf("%d %d",&numA,&numB);
	int max,min;
	if(numA>=numB)
	{
		max=numA;
		min=numB;
	}
	else
	{
		max=numB;
		min=numA;
	}
	int num1,num2,num3;
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
	int q1,q2,q3,q;
		q1=num1<num2?num1%num2:num2%num1;
		q2=num2<num3?num2%num3:num3%num2;
		q3=num1<num3?num1%num3:num3%num1;
	if(q1>=q2&&q1>=q3)
		printf("%d",q1);
	else if(q2>=q1&&q2>=q3)
		printf("%d",q2);
	else if(q3>=q1&&q3>=q2)
		printf("%d",q3);
	return 0;
}
