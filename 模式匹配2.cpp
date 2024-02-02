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
	int num=0;
	for(int i=0;i<n-2;i++)
	{
		if(arr[i]==3&&arr[i+1]==5&&arr[i+2]==7)
			num++;
	}
	printf("%d",num);
	return 0;
}
