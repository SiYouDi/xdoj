#include<stdio.h>
int main()
{
	int j=0,k=0;
	for(int i = 1;i<=100;i++)
	{
		if(i%2!=0)
		{
			j+=i;
		}
		else
		{
			k+=i;
		}
	}
	printf("%d\n%d",j,k);
	return 0;
}
