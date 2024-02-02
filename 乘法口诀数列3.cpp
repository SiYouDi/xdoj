#include<stdio.h>
int main()
{
	int a1,a2,n;
	int arr[100]={0};
	scanf("%d %d %d",&a1,&a2,&n);
	arr[0]=a1;
	arr[1]=a2;
	int num=2;
	int p=2;
	while(num<=n)
	{
		int an=arr[p-2]*arr[p-1];
		if(an>=100)
		{
			arr[num++]=an/100;
			arr[num++]=(an/10)%10;
			arr[num++]=an%10;
		}
		else if(an<100&&an>=10)
		{
			arr[num++]=an/10;
			arr[num++]=an%10;
		}
		else
		{
			arr[num++]=an;
		}
		p++;
	}
	for(int i =0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
