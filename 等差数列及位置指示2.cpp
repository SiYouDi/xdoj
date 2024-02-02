#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		arr2[i]=i+1;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
	}
	int p=1;
	for(int i=0;i<n-2;i++)
	{
		if(arr[i+1]-arr[i]!=arr[i+2]-arr[i+1])
		{
			p=2;
			break;
		}
	}
	if(p==1)
	{
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr2[i]);
		}
	}
	else
	{
		int pmin=32767;
		int pmax=-32768;
		for(int i=0;i<n-1;i++)
		{
			if(arr[i+1]-arr[i]<pmin)
				pmin=arr[i+1]-arr[i];
			if(arr[i+1]-arr[i]>pmax)
				pmax=arr[i+1]-arr[i];
		}
		printf("%d %d",pmax,pmin);
	}
	return 0;
}
