#include<stdio.h>
int main()
{
	int n ;
	scanf("%d",&n);
	int arrnum[n];
	int arrp[n]={0};
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arrnum[i]);
	}
	for(int i =0;i<n;i++)
	{
		for(int j =i;j<n;j++)
		{
			if(arrnum[j]==arrnum[i])
			{
				arrp[i]++;
			}
		}
	}
	int pmax=0;
	int nummin=10000;
	for(int i =0;i<n;i++)
	{
		if(arrp[i]>pmax)
			pmax=arrp[i];
	}
	for(int i =0;i<n;i++)
	{
		if(arrp[i]==pmax)
		{
			if(arrnum[i]<nummin)
				nummin=arrnum[i];
		}
	}
	printf("%d",nummin);
	return 0;
}
