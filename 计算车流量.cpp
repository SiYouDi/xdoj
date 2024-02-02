#include<stdio.h>
int main()
{
	int i = 0,m,n,t,p;
	int arr[10000];
	int arr1[10000];
	while(scanf("%d",&arr[i]))
	{
		arr1[i]=arr[i];
		if(arr[i]==0)
		{
			break;
		}
		t=arr[i]/90;
		n=arr[i]%90;
		if(n<=60)
		{
			arr1[i]=60*3*t+3*n;	
		}
		else
		{
			arr1[i]=60*3*t+3*60;
		}
		i++;
	}

	for(i=0;1;i++)
	{
		if(arr1[i]==0)
		{
			break;
		}
		printf("%d ",arr1[i]);
	}
	return 0;
}
