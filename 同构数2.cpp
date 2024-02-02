#include<stdio.h>
#include<math.h>
int main()
{
	int n,m=0,t=0,num=0;
	scanf("%d",&n);
	t=n*n;
	int i =0;
	while(m!=n)
	{
		m=t%((int)pow(10,i++));
		if(m==n)
			num++;
		else if(m>n)
			break;
	}
	printf("%d %d",n,num);
	return 0;
}
