#include<stdio.h>
int main()
{
	int n = 0;//定义数组的元素个数 
	scanf("%d", &n);
	const int m = n;//定义一个常变量等于n，用于表示数组内的元素个数 
	int arr[m];//定义数组 
	for(int i = 0;i<m;i++)//输入数组内的元素 
	{
		scanf("%d",&arr[i]);
	}
	int p = 0;//初始化要在数组中获取的值 
	int q=1;
	scanf("%d",&p);
	for(int j = 0;j<m;j++)
	{
		if(arr[j]==p)//如果数组中有值等于输入值，输出他的下标 
		{
			printf("%d",j);
			break;//只输出第一个数的下标 
		}
		else if(arr[j]!=p)//如果数组中所有值都不等于输入值p，输出-1 
		{
			q++;
		}
		if(q==m)
		{
			printf("%d",-1);
		}
	}
	return 0;
}
