#include<stdio.h>
struct abs
{
	int code[2000];
	int sum[2000];
	float price[2000];
	int std[2000];
};
int main()
{
	int n ;
	scanf("%d",&n);
	struct abs num;
	for(int i =0;i<n;i++)
	{
		scanf("%d%d%f",&num.code[i],&num.sum[i],&num.price[i]);
	}
	int sum=0;
	for(int i =0;i<n;i++)
	{
		num.std[i]=1;
		for(int k=1;k<num.sum[i];k++)
		{
			if((num.sum[i]%k==0&&k!=1)||(num.sum[i]==1))
			{
				num.std[i]=0;
				break;
			}
		}
		if(num.sum[i]==0)
			num.std[i]=0;
		sum+=num.std[i];
	}
	int temp;
	float temp2;
	for(int j =0;j<n;j++)
	{
		for(int i =0;i<n-1;i++)
		{
			if(num.code[i]>num.code[i+1])
			{
				temp=num.code[i];
				num.code[i]=num.code[i+1];
				num.code[i+1]=temp;
			
				temp=num.sum[i];
				num.sum[i]=num.sum[i+1];
				num.sum[i+1]=temp;
			
				temp2=num.price[i];
				num.price[i]=num.price[i+1];
				num.price[i+1]=temp2;
			
				temp=num.std[i];
				num.std[i]=num.std[i+1];
				num.std[i+1]=temp;
			}
		}
	}
	
	if(sum)
	{
		for(int i =0;i<n;i++)
		{
			if(num.std[i]==1)
				printf("%d %d %.2f\n",num.code[i],num.sum[i],num.price[i]);
		}
	}
	else
	{
		for(int i =0;i<n;i++)
		{
			printf("%d %d %.2f\n",num.code[i],num.sum[i],num.price[i]);
		}
	}
	return 0;
}
