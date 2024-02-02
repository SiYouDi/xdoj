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
	int max;
	int min;
	int sum=0;
	int p;
	int temp1;
	int temp2;
	for(int i =0;i<n-1;i++)
	{
		max=arr[i]>arr[i+1]?arr[i]:arr[i+1];
		min=arr[i]<arr[i+1]?arr[i]:arr[i+1];
		while(1)
		{
			temp1=(max-min)>=min?max-min:min;
			temp2=(max-min)<min?max-min:min;
			max=temp1;
			min=temp2;
			if(max==min||min==0)
			{
				p=max;
				break;
			}
			if(min==1)
			{
				p=1;
				break;
			}
		}
		int ret=(arr[i]*arr[i+1])/p;
		sum+=ret; 
	}
	printf("%d",sum);
	return 0;
}
