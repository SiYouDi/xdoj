#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	for(int i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	int ret=sum/n;
	int p =0;
	for(int i=0;i<n;i++)
	{
		p+=(arr[i]-ret)*(arr[i]-ret);
	}
	p=p/n;
	printf("%d",p);
	return 0;
}
