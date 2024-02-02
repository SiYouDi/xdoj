#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int arr[m][m];
	for(int i =0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<m;i++)
	{
		sum+=arr[i][i];
		arr[i][i]=0;
	}
	for(int j =0;j<m;j++)
	{
		sum+=arr[j][m-1-j];
		arr[j][j]=0;
	}
	printf("%d",sum);
	return 0;
}
