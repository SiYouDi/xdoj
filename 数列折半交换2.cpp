#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int num=n/2;
	for(int i=0;i<num;i++)
	{
		int temp=arr[i];
		arr[i]=arr[i+num+n%2];
		arr[i+num+n%2]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
