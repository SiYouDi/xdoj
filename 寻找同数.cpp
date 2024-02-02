#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[3];
	char arr2[50];
	scanf("%s",arr1);
	scanf("%s",arr2);
	int num=0;
	while(strstr(arr2,arr1)!=NULL)
	{
		*strstr(arr2,arr1)='c';
		num++;	
	}	
	printf("%d",num);
	return 0;
}
