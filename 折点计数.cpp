#include<stdio.h>
int main()
{
	int n,i,a,b,p;
	p=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	a=arr[1]-arr[0];
	b=a;
	for(i=1;i<n-1;i++)
	{
		a=arr[i+1]-arr[i];
		if(a*b<0)
		{
			p++;
		}
		b=a;
	}
	printf("%d",p);
	return 0;
}
