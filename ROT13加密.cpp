#include<stdio.h>
#include<string.h>
int main()
{
	char arr[60]={"\0"};
	gets(arr);
	int len=strlen(arr);
	for(int i =0;i<len;i++)
	{
		if((arr[i]<='z'&&arr[i]>='a')||(arr[i]<='Z'&&arr[i]>='A'))
		{
			if((arr[i]<='m'&&arr[i]>='a')||(arr[i]<='M'&&arr[i]>='A'))
				arr[i]+=13;
			else
				arr[i]-=13;
		}
	}
	printf("%s",arr);
	return 0;
}
