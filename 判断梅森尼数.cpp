#include<stdio.h>
#include<math.h>
int check(int n,int* p)
{
	*p=(int)pow(2,n)-1;
	for(int i =2;i<*p;i++)
	{
		if(*p%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int m;
	int *p=&m;
	int num=check(n,p);
	printf("%d %d",m,num);
	return 0;
}
