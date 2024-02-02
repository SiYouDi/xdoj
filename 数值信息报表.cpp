#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int max=0;
	int min=100000;
	int pmax;
	int pmin;
	int sum=0;
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
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
		sum+=arr[i];
	}
	printf("%d %d %d %d %d",sum,max,pmax,min,pmin);
	return 0;
}
