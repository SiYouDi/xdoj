#include<math.h>
#include<stdio.h>
int main()
{
	int n,i,m,max;
	max=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		m=arr[i+1]-arr[i];
		m=abs(m);
		if(m>=max)
		{
			max=m;
		}
	}
	printf("%d",max);
	return 0;
}
