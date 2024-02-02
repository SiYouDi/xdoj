#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num;
	for(int i =0;i<n;i++)
	{
		int arr[10][10]={0};
		int point=1; 
		scanf("%d",&num);
		for(int j=0;j<num;j++)
		{
			for(int k = 0;k<num;k++)
			{
				scanf("%d",&arr[j][k]);
			}
		}
		for(int j=0;j<num;j++)
		{
			for(int k =j+1;k<num;k++)
			{
				if(arr[k][j]!=0)
				{
					point=0;
					break;
				}
			}
		}
		if(point)
			printf("YES\n");
		else
			printf("NO\n");
	} 
	return 0;
}
