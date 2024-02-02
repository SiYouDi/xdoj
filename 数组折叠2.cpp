#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int p=(int)pow(2,n);
	int arr[p];
	for(int i=0;i<p;i++)
	{
		scanf("%d",&arr[i]);
	}
	int left=0;
	int right=p-1;
	int num=0;
	for(int i=0;i<m;i++)
	{
		int pi=(int)pow(2,i);
		num=0;
		left=0;
		right=p/pi-1;
		while(left<right)
		{
			arr[num++]=arr[left++]+arr[right--];
		}
	}
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
