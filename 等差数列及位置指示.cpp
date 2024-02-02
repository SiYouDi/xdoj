#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arrnum[n];
	int arrp[n]={0};
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arrnum[i]);
		arrp[i]=i+1;
	}
	for(int i =0;i<n;i++)
	{
		for(int j =0;j<n-1;j++)
		{
			if(arrnum[j]>arrnum[j+1])
			{
				int temp_num=arrnum[j];
				arrnum[j]=arrnum[j+1];
				arrnum[j+1]=temp_num;
				int temp_p=arrp[j];
				arrp[j]=arrp[j+1];
				arrp[j+1]=temp_p;
			}
		}
	}
	int num=0;
	for(int i =0;i<n-2;i++)
	{
		if((arrnum[i+1]-arrnum[i])!=(arrnum[i+2]-arrnum[i+1]))
		{
			num=1;
			break;
		}
	}
	if(num==0)
	{
		for(int i =0;i<n;i++)
		{
			printf("%d ",arrp[i]);
		}
	}
	else if(num==1)
	{
		int min=32767;
		int max=-32768;
		for(int i =0;i<n-1;i++)
		{
			if((arrnum[i+1]-arrnum[i])>max)
				max=arrnum[i+1]-arrnum[i];
			if((arrnum[i+1]-arrnum[i])<min)
				min=arrnum[i+1]-arrnum[i];
		}
		printf("%d %d",max,min);
	}
	return 0;
}
