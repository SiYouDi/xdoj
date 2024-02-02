#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m=n*n;
	int t=n-1;
	int i =0;
	int num=0;
	while(n!=t)
	{
		t=m%(int)pow(10,i++);
		if(n==t)
			num=1;
		else if(t>=m)
			break;
	}
	printf("%d %d",n,num);
	return 0;
}
