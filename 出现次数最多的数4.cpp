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
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int max=0;
	int pmin;
	for(int i=0;i<n;i++)
	{
		int num=1;
		while(arr[i]==arr[i+num]&&i+num<n)
		{
			num++;
			if(num>max)
			{
				max=num;
				pmin=arr[i];
			}
		}
		i=i+num-1;
	}
	if(max==0)
		pmin=arr[0];
	printf("%d",pmin);
	return 0;
}
