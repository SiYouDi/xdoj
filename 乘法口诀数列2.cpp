#include<stdio.h>
int main()
{
	int arr[100];
	int n;
	scanf("%d %d %d",&arr[0],&arr[1],&n);
	int num=2;
	for(int i =0;i<n-1;i++)
	{
		int temp=arr[i]*arr[i+1];
		if(temp>=10)
		{
			arr[num++]=temp/10;
			arr[num++]=temp%10;
		}
		else
			arr[num++]=temp;
	}
	for(int i =0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
