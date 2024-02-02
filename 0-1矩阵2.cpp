#include<stdio.h>
int main()
{
	int m,n,sum=0,max=0,minj,maxj;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(int i = 0;i<m; i++)
	{
		for(int j = 0;j<n; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0;i<m; i++)
	{
		for(int j = 0;j<n; j++)
		{
			if(arr[i][j]==1)
			{
				sum++;
				if(sum>max)
				{
					max=sum;
					maxj=j;
					minj=j-max+1;
				}
			}
			else
			{
				sum=0;
			}
		}
		if(max>0)
		{
			printf("%d %d\n",minj,maxj);
		}
		else
		{
			printf("-1 -1\n");
		}
		sum=0,max=0,maxj=0,minj=0;
	}
	
	return 0;
}
