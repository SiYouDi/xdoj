#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);//输入数组的元素个数 
	int arr[a];
	for(int i=0;i<a;i++)//对数组进行循环，循环次数为数组的元素个数 
	{
		scanf("%d",&arr[i]);//对数组内元素进行初始化 
		b=1;//每次在进行第二个for循环之前初始化b为零，防止b一直加下去 
		for(int j = 2;j<arr[i];j++)//用数组中的元素除以从2到i-1的数 
		{
			if(arr[i]%j!=0)//若该结果不为零，b加一 
			{
				b++;
			}

		}
		if(b==arr[i]-1)//b从1开始加 ,共出现过arr[i]-1个求余为0的情况,那么arr[i]为素数 
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}
	return 0;
}
