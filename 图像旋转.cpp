#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	int arr1[n][m];
	int arr2[m][n];
	for(int i = 0;i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	int num=0;
	for(int j =n-1;j>=0;j--)
	{
		for(int i =0;i<m;i++)
		{
			arr2[i][j]=arr1[0][num++];
		}
	}
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
