#include<stdio.h>
int main()
{
	int m =0;
	int i =0;
	int num=0;
	scanf("%d",&m);
	if(m==0)
	{
		printf("0");
		goto FLAG;
	}
	int arr[10];
	while(m>0)
	{
		arr[i]=m%10;
		i++;
		m/=10;
	}
	for(int j =0;j<i-1;j++)
	{
		if(arr[j]==arr[i-1-j])
		{
			num++;
		}
		else
		{
			printf("no");
			break;
		}
	}
	if(num==i-1)
	{
		int sum=0;
		for(int j = 0;j<=i-1;j++)
		{
			sum+=arr[j];
		}
		printf("%d",sum);
	}
	FLAG:
	return 0;
}
