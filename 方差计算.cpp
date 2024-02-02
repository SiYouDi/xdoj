#include<stdio.h>
int main()
{
	int num=0;
	scanf("%d",&num);
	int arr[30];
	for(int i =0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	int nums=0;
	for(int i=0;i<num;i++)
	{
		nums+=arr[i];
	}
	nums/=num;
	int p =0;
	for(int i =0;i<num;i++)
	{
		p+=((arr[i]-nums)*(arr[i]-nums));
	}
	p/=num;
	printf("%d",p);
	return 0;
}
