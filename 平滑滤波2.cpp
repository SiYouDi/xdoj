#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int arr2[n];
	arr2[0]=(arr[0]+arr[1]+arr[2])/3;
	arr2[n-1]=(arr[n-3]+arr[n-2]+arr[n-1])/3;
	for(int i=1;i<n-1;i++)
	{
		arr2[i]=(arr[i-1]+arr[i]+arr[i+1])/3;
	}
	for(int i =0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}
