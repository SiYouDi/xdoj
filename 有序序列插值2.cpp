#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&arr[n]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
