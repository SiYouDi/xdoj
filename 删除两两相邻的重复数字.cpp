#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char arr[n]={"\0"};
	int nums=n;
	int nums2=n;
	for(int i=0;i<nums;i++)
	{
		scanf(" %c",&arr[i]);
	}
	for(int j =0;j<(nums2);j++)
	{
		int num=0;
		n=nums;
		for(int i =0;i<n-1;i++)
		{
			if(arr[i]==arr[i+1])
			{
				arr[i]='c';
				arr[i+1]='c';
				nums-=2;
				break;
			}
		}
		for(int k =0;k<n;k++)
		{
			if(arr[k]!='c')
				arr[num++]=arr[k];
		}
	}
	if(nums==0)
		printf("NULL\n");
	else
	{
		for(int i =0;i<nums;i++)
			printf("%d ",arr[i]-'0');
	}
	return 0;
}
