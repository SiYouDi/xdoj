#include<stdio.h>
int main()
{
	int m =0;
	int num=0;
	int i=0;
	int j=0;
	scanf("%d",&m);
	int arr[100][100];
	int arr2[10000];
	for(i =0;i<m;i++)
	{
		for(j =0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	arr2[num++]=arr[0][0];
	i=0;
	j=0;
	while(1)
	{
		if(i==0&&j==m-1)
		{
			i++;
			while(i+1<=m-1&&j-1>=0)
			{
				arr2[num++]=arr[i++][j--];
			}
			arr2[num++]=arr[i][j];
		}
		else if(i-1<0||i+1>m-1)
		{
			j++;
			if(i-1<0)
			{
				while(i+1<=m-1&&j-1>=0)
				{
					arr2[num++]=arr[i++][j--];
				}
				arr2[num++]=arr[i][j];
			}
			else if(i+1>m-1)
			{
				while(i-1>=0&&j+1<=m-1)
				{
					arr2[num++]=arr[i--][j++];
				}
				arr2[num++]=arr[i][j];
			}
			
		}
		else if(j-1<0||j+1>m-1)
		{
			i++;
			if(j-1<0)
			{
				while(i-1>=0&&j+1<=m-1)
				{
					arr2[num++]=arr[i--][j++];
				}
				arr2[num++]=arr[i][j];
			}
			else if(j+1>m-1)
			{
				while(i+1<=m-1&&j-1>=0)
				{
					arr2[num++]=arr[i++][j--];
				}
				arr2[num++]=arr[i][j];
			}
			
		}
		if(i==m-1&&j==m-1)
		{
			break;
		}
	}
	for(i = 0;i<m*m;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}
