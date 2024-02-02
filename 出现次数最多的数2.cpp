#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int arr2[10000]={0};
	int max=0;
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		arr2[arr[i]]++;
		if(arr2[arr[i]]>=max)
			max=arr2[arr[i]];
	}
	int min=10000;
	for(int i =0;i<n;i++)
	{
		if(arr2[arr[i]]==max)
		{
			if(arr[i]<min)
				min=arr[i];
		}
	}
	printf("%d",min);
	return 0;
}
