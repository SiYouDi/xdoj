#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	gets(arr);
	int p=0;
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		if(arr[i]!='*')
			arr[p++]=arr[i];
	}
	for(int i =0;i<p;i++)
	{
		for(int j =0;j<p-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				char temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i =0;i<p;i++)
	{
		printf("%c",arr[i]);  	
	}                                                                                                                                                                                                                                                                                            
	return 0;
}
