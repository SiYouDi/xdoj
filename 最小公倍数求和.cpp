#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(int i =0;i<n-1;i++)
	{
		int max=arr[i]>=arr[i+1]?arr[i]:arr[i+1];
		int min=arr[i]>=arr[i+1]?arr[i+1]:arr[i];
		int temp=0;
		int pow=max*min;
		while(max!=min)
		{
			temp=max-min;
			max=temp>min?temp:min;
			min=temp>min?min:temp;
		}
		int det=pow/min;
		sum+=det;
	}
	printf("%d",sum);
	return 0;
}
