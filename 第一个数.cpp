#include<stdio.h>
int main()
{
	int n = 0;//���������Ԫ�ظ��� 
	scanf("%d", &n);
	const int m = n;//����һ������������n�����ڱ�ʾ�����ڵ�Ԫ�ظ��� 
	int arr[m];//�������� 
	for(int i = 0;i<m;i++)//���������ڵ�Ԫ�� 
	{
		scanf("%d",&arr[i]);
	}
	int p = 0;//��ʼ��Ҫ�������л�ȡ��ֵ 
	int q=1;
	scanf("%d",&p);
	for(int j = 0;j<m;j++)
	{
		if(arr[j]==p)//�����������ֵ��������ֵ����������±� 
		{
			printf("%d",j);
			break;//ֻ�����һ�������±� 
		}
		else if(arr[j]!=p)//�������������ֵ������������ֵp�����-1 
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
