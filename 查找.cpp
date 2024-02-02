#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[n];
	int num=0;
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j =0;j<n;j++)
	{
		if(arr[j]==k)
		{
			printf("%d ",j);
			num++;
		}
	}
	if(num==0)
	{
		printf("-1");
	}
	return 0;
}
