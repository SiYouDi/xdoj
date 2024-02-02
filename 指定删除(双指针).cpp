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
	int del;
	scanf("%d",&del);
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=del)
		{
			arr[j++]=arr[i];
		}
	}
	for(int i =0;i<j;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
