#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n];
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=0,min=20;
	int p_max,p_min;
	for(int i =0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			p_max=i;
		}
		if(arr[i]<min)
		{
			min=arr[i];
			p_min=i;
		}
	}
	int num=n;
	if(max!=arr[m-1])
	{
		arr[p_max]=0;
		num--;
	}
	if(min!=arr[m-1])
	{
		arr[p_min]=0;
		num--;
	}
	float sum=0;
	for(int i =0;i<n;i++)
	{
		sum+=arr[i];
	}
	float ret=sum/num;
	printf("%.2f",ret);
	return 0;
}
