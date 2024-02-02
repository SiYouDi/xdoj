#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int arrp[n]={0};
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j =i;j<n;j++)
		{
			if(arr[j]==arr[i])
			{
				arrp[i]++;
			}
		}
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(arrp[i]>max)
			max=arrp[i];
	}
	int min=10000;
	for(int i=0;i<n;i++)
	{
		if(arrp[i]==max)
		{
			if(arr[i]<min)
				min=arr[i];
		}
	}
	printf("%d",min);
	return 0;
}
