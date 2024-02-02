#include<stdio.h>
int main7()
{
	int a,b,i,j,sum;
	scanf("%d %d",&a,&b);
	int arr[b-a+1]={};
	for(i=0;i<b-a+1;i++)
	{
		arr[i]=a+i;
	}
	for(i=0;i<b-a+1;i++)
	{
		sum=0;
		for(j=1;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				sum+=j;
			}

		}
		if(sum==arr[i])
		{
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
