#include<stdio.h>
int main()
{
	int N,n1,n2,n3,n4,n5,i;
	n1=0;
	n2=0;
	n3=0;
	n4=0;
	n5=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i%2!=0)
		{
			n1++;
		}
		if(i%2==0)
		{
			n2++;
		}
		if(i%3==0)
		{
			n3++;
		}
		if(i%5==0)
		{
			n4++;
		}
		if(i%7==0)
		{
			n5++;
		}
	}
	printf("%d %d %d %d %d",n1,n2,n3,n4,n5);
	return 0;
}
