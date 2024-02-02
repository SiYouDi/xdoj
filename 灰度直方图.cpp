#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[n][m];
	int number[16]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int i=0;
	while(i<m*n)
	{
		number[arr[0][i]]++;
		i++;
	}
	for(int i =0;i<16;i++)
	{
		if(number[i]!=0)
			printf("%d %d\n",i,number[i]);
	}
	return 0;
}
