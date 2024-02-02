#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[(int)pow(2,n)]={0};
	for(int i =0;i<pow(2,n);i++)
	{
		scanf("%d",&arr[i]);
	}
	int num=0;
	while(m!=num)
	{
		for(int i =0;i<pow(2,n-1-num);i++)
		{
			arr[i]=arr[i]+arr[(int)pow(2,n-num)-1-i];
		}
		num++;
	}
	for(int i =0;i<pow(2,n-m);i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
