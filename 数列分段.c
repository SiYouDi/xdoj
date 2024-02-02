#include<stdio.h>
int main()
{
	int n,p;
	scanf("%d",&n);
	int arr[n];
	p=1;
	int i;
	if(n>1&&n<=1000)
	{
		for(i =0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++)
		{			
			if(i+1<n)
			{
				if(arr[i]!=arr[i+1])
				{
					p++;
				}
			}
		}
		printf("%d",p);
	}
	if(n==1)
	{
		scanf("%d",&arr[n-1]);
		printf("1");
	}
	return 0;
}         
