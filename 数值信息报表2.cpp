#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	int max=0,min=100000;
	int pmax,pmin;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
		if(arr[i]>max)
		{
			max=arr[i];
			pmax=i+1;
		}
		if(arr[i]<min)
		{
			min=arr[i];
			pmin=i+1;
		}
	}
	printf("%d %d %d %d %d",sum,max,pmax,min,pmin);
	return 0;
}
