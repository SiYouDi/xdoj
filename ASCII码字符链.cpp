#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[1000]="\0";
	char ch;
	gets(arr1);
	scanf("%c",&ch);
	int j =0;
	int i =0;
	for(i =0;arr1[i]!='\0';i++)
	{
		if(arr1[i]!=ch)
		{
			arr1[j++]=arr1[i];
		}
	}
	if(i!=j)
	{
		for(int i =0;i<j;i++)
		{
			printf("%c",arr1[i]);
		}
	}
	else
		printf("Did not find");
	return 0;
}
