#include<stdio.h>
int main()
{
	int n ;
	int num=0;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			int t;
			if(arr[j+1]<arr[j])
			{
				t=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=t;
			}
		}
	}
	for(int j = 0;j<n-2;j++)
	{
		if((arr[j+2]-arr[j+1])==(arr[j+1]-arr[j]))
		{
			num++;
		}
	}
	if(num==n-2)
	{
		printf("%d",arr[1]-arr[0]);
	}
	else
	{
		printf("no");
	}
	return 0;
}
