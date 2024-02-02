#include<stdio.h>
int main()
{
	int m,n,num;
	int p1=0,p2=0;
	scanf("%d %d",&m,&n);
	num=m+n;
	int arr[num],arr1[m],arr2[n];
	for(int i = 0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(int j = 0;j<num;j++)
	{
		if((arr1[p1]<=arr2[p2]&&p1<m&&p2<n)||p2>=n)
		{
			arr[j]=arr1[p1];
			p1++;
		}
		else if((arr1[p1]>arr2[p2]&&p1,m&&p2<n)||p1>=m)
		{
			arr[j]=arr2[p2];
			p2++;
		}
	}
	for(int k=0;k<num;k++)
	{
		printf("%d ",arr[k]);
	}
	return 0;
}
