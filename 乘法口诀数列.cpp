#include<stdio.h>
int main()
{
	int a1,a2;
	int n;
	scanf("%d %d %d",&a1,&a2,&n);
	int arr[n+1]={0};
	arr[0]=a1;
	arr[1]=a2;
	int num=2;
	int i =0;
	while(num<=n&&i<n-1)
	{
		int p=0;
		int temp=arr[i]*arr[i+1];
		while(temp>0)
		{
			p++;
			arr[num++]=temp%10;
			temp/=10;
		}
		if(p==2)
		{
			int temp=arr[num-1];
			arr[num-1]=arr[num-2];
			arr[num-2]=temp;
		}
		i++;
	}
	for(int i =0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
