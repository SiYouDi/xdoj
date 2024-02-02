#include<stdio.h>
#include<math.h>
int main()
{
	int n=0;
	int num=0;
	scanf("%d",&n);
	num=n*n;
	int temp=n;
	int ns=0;
	while(temp>0)
	{
		temp/=10;
		ns++;
	}
	int nums=0;
	for(int i =0;i<ns;i++)
	{
		nums+=num%10*pow(10,i);
		num/=10;
	}
	if(nums==n)
		printf("%d 1",n);
	else
		printf("%d 0",n);
	return 0;
}
