#include<stdio.h>
int main()
{
	int n,count =0;
	float average = 0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		average+=arr[i];
		if(arr[i]>=60)
		{
			count+=1;
		}
	}
	average=average/n;
	printf("average=%.1f\ncount=%d",average,count);
	return 0;
 } 
