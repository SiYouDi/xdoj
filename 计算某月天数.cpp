#include<stdio.h>
int main5()
{
	int year,month,code;
	scanf("%d %d",&year,&month);
	if(year%4==0)
	{
		if(year%100!=0)
		{
			code=1;
		}
		else if(year%100==0)
		{
			if(year%400==0)
			{
				code=1;
			}
			else
			{
				code=0;
			}
		}
	}
	else
	{
		code=0;
	}
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		printf("31");
	}
	else if(month==4||month==6||month==9||month==11)
	{
		printf("30");

	}
	else if(month==2)
	{
		if(code==1)
		{
			printf("29");
		}
		else
		{
			printf("28");
		}
	}
	return 0;
}
