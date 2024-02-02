#include<stdio.h>
#include<math.h>
int main2()
{
	int n,i,j,num,min;
	scanf("%d",&n);
	int arr[n];
	min=10000;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=1;j+i<n;j++)
		{
			num=arr[i]-arr[i+j];
			num=abs(num);
			if(num<min)
			{
				min=num;
			}
		}
	}
	printf("%d",min);
	return 0;
}
