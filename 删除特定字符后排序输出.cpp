#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100];
	gets(arr1);
	int len=strlen(arr1);
	char arr2[len];
	int num=0;
	for(int i =0;i<len;i++)
	{
		if(arr1[i]!='*')
			arr2[num++]=arr1[i];
	}
	len=strlen(arr2);
	for(int i =0;i<len;i++)
	{
		for(int j =0;j<len-1;j++)
		{
			if(arr2[j]>arr2[j+1])
			{
				char temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
	}
	printf("%s",arr2);
	return 0;
}
