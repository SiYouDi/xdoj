#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	int arr2[n]; 
	for(int i =0;i<m;i++)
	{
		for(int j =0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0;i<m;i++)
	{
		int sum=0;
		for(int j = 0;j<n;j++)
		{
			sum+=arr[i][j];
		}
		if(sum==0)
		{
			printf("-1 -1\n");
			continue;
		}

		float ddd=sum/2.0;
		int num=0;
		for(int j =0;j<n;j++)
		{
			if(arr[i][j]==1)
			{
				arr2[num]=j;
				num++;	
				if(num>=ddd)
				{
					for(int k =j;k<n-1;k++)
					{
						if(arr[i][j+1]==1)
						{
							continue;
						}
						else
						{
							printf("%d %d\n",arr2[0],arr2[num-1]);
						}
					}
					continue;
				}
			}
			else
			{
				num=0;
				for(int k =0;k<n;k++)
				{
					arr2[k]=0;
				}
			}

		}
		num=0;
	}
	return 0;
}
