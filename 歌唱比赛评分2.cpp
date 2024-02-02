#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n];
	int max=0,min=20;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
		sum+=arr[i];
	}
	if(arr[m-1]!=max)
	{
		sum-=max;
		n--;
	}
	if(arr[m-1]!=min)
	{
		sum-=min;
		n--;
	}
	float score=sum*1.0/n*1.0;
	printf("%.2f",score);
	return 0;
}
