#include<stdio.h>
#include<string.h>
int num=1;
int main()
{
	char arr1[100];
	int arr2[100]={0};
	gets(arr1);
	int len=strlen(arr1);
	arr2[0]=0;
	while(1)
	{
		char* p=strchr(arr1,' ');
		if(p!=NULL)
		{
			arr2[num++]=(p-&arr1[0])+1;
			*p='c';
			p=strchr(arr1,' ');
		}
		else
		{
			arr2[num++]=len+1;
			break;
		}
	}
	int nums=num-2;
	for(int i=num-1;i>0;i--)
	{
		for(int j=arr2[i-1];j<arr2[i]-1;j++)
		{
			printf("%c",arr1[j]);
		}
		if(nums)
		{
			nums--;
			printf(" ");
		}
	}
	return 0;
}
