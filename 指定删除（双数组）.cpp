#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int arr[n];
	int arr2[n];
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int del=0;
	scanf("%d",&del);
	int j =0;
	for(int i =0;i<n;i++)
	{
		if(arr[i]!=del)
		{
			arr2[j++]=arr[i];
		}
	}
	for(int i =0;i<j;i++)
	{
		printf("%d",arr2[i]);
	}
	return 0;
}
