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
	int i =0;
	int max=1;
	while(i<n)
	{
		int j=1;
		while(arr[i]==arr[i+j]&&i+j<n)
		{
			j++;
			if(j>max)
				max=j;
		}
		i+=j;
	}
	printf("%d",max);
	return 0;
}
