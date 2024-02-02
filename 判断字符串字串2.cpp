#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20];
	char arr2[20];
	gets(arr1);
	gets(arr2);
	char* p=strstr(arr1,arr2);
	if(p!=NULL)
		printf("%d",p-arr1+1);
	else
		printf("NO!");
	return 0;
}
