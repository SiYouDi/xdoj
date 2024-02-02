#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100]={0};
	gets(arr);
	int i=0,j=0,num=0;
	while(arr[i]!='\0')
	{
		if(arr[j]=='*')
		{
			num++;
			j++;
		}
		else
			arr[i++]=arr[j++];
	}
	for(int l=0;l<i;l++)
	{
		for(int k=0;k<i-1;k++)
		{
			if(arr[k]>arr[k+1])
			{
				char tmp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=tmp;
			}
		}
	}
	for(int k=0;k<i;k++)
	{
		printf("%c",arr[k]);
	}
	return 0;
}
