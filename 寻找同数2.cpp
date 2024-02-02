#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[3]={'\0'};
	char arr2[50]={'\0'};
	gets(arr1);
	gets(arr2);
	int num=0;
	char* p=arr2;
	for(p=strstr(arr2,arr1);p!=NULL;p=strstr(p,arr1))
	{
		num++;
		p++;
	}
	printf("%d",num);
	return 0;
}
