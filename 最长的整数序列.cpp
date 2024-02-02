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
	int j=1;
	int max=1;
	int i=0;
	while(i+j<n)
	{
		if(arr[i]==arr[i+j])
		{
			if(j+1>max)
				max=j+1;
			j++;
		}
		else
		{
			i=i+j;
			j=1;
		}
	}
	printf("%d",max);
	return 0;
}
