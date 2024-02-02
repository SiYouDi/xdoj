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
	for(int i=0;i<n;i++)
	{
		if(n%2!=0&&i<(n/2))
		{
			int temp=arr[i];
			arr[i]=arr[i+(n/2+1)];
			arr[i+(n/2+1)]=temp;	
		}
		else if(n%2==0&&i<(n/2))
		{
			int temp=arr[i];
			arr[i]=arr[i+(n/2)];
			arr[i+(n/2)]=temp;
		}
		
	}
	for(int i =0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
