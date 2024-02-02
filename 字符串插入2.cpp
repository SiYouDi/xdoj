#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[40];
	char arr2[20];
	gets(arr1);
	gets(arr2);
	int n;
	scanf("%d",&n);
	int len1=strlen(arr1);
	int len2=strlen(arr2);
	for(int i=0;i<20;i++)
	{
		if(i==n)
		{
			printf("%s",arr2); 
		}
		if(i<len1)
		{
			printf("%c",arr1[i]);
		}
	}
	return 0;
}
