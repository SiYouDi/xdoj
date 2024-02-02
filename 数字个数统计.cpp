#include<stdio.h>
int main()
{
	int i,num;
	num=0;
	for(i=100;i<500;i++)
	{
		if(i%7==0||i%11==0)
		{
			num+=1;
		}
		if(i%7==0&&i%11==0)
		{
			num-=1;
		}
	}
	printf("%d",num);
	return 0;
}
