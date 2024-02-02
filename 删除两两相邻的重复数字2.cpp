#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int nums=n;
	int arr[n];
	for(int i =0;i<n;i++)
		scanf("%d",&arr[i]);
	int point=1;
	for(int i =0;i<nums;i++)
	{
		if(arr[i]==arr[i+1]&&point==1)
		{
			nums-=2;
			arr[i]=arr[i+2];
			arr[i+1]=arr[i+3];
			point=0;
		}
		if(point==0)
		{
			for(int k=i+1;k<nums;k++)
			{
				arr[k]=arr[k+2];
			}
			i=-1;
			point=1;
		}
		if(nums==0)
			break;
	}
	if(nums<=0)
		printf("NULL\n");
	else
		for(int i =0;i<nums;i++)
			printf("%d ",arr[i]);
	return 0;
}
