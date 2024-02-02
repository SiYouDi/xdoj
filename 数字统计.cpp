#include<stdio.h>
int main()
{
	int m,k;
	scanf("%d %d",&m,&k);
	int an=0;
	int num1=0,num2=0,num3=0;
	for(int i =1;i<=k;i++)
	{
		if(i==1)
			an=2;
		else if(i==2)
			an=3;
		else
			an=(i-1)*(i-1)+3*(i-2)+1;
		if(an%m==0)
			num1++;
		if(an%m==1)
			num2++;
		if(an%m>1)
			num3++;
	}
	printf("%d %d %d",num1,num2,num3);
	return 0;
}
