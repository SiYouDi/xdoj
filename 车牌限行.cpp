#include<stdio.h>
int main3()
{
	int week,point,num,n;
	scanf("%d %d %d",&week,&point,&num);
	n=num%10;
	if(week==6||week==7)
	{
		printf("%d no",n);
	}
	else
	{
		if(point<200)
		{
			printf("%d no",n);
		}
		else if(point>=200&&point<400)
		{
			if(week==1)
			{
				if(n==1||n==6)
				{
					printf("%d yes",n);
				}
				else
				{
					printf("%d no",n);
				}
			}
			else if(week==2)
			{
				if(n==2|n==7)
				{
					printf("%d yes",n);
				}
				else
				{
					printf("%d no",n);
				}
			}
			else if(week==3)
			{
				if(n==3||n==8)
				{
					printf("%d yes",n);
				}
				else
				{
					printf("%d no",n);
				}
			}
			else if(week==4)
			{
				if(n==4||n==9)
				{
					printf("%d yes",n);
				}
				else
				{
					printf("%d no",n);
				}
			}
			else if(week==5)
			{
				if(n==5||n==0)
				{
					printf("%d yes",n);
				}
				else
				{
					printf("%d no",n);
				}
			}
		}
		else
		{
			if(week%2==1)
			{
				if(num%2==1)
				{
					printf("%d yes",n);
				}
				else
				{
					printf("%d no",n);
				}
			}
			else
			{
				if(num%2==0)
				{
					printf("%d yes",n);
				}
				else
				{
					printf("%d no",n);
				}
			}
		}
	}
	return 0;
}
