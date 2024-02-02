#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100]={0};
	gets(arr);
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				char tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	int num=0;
	while(arr[num]!='\0')
	{
		if(arr[num]!='*')
			printf("%c",arr[num]);
		num++;
	}
	return 0;
}
