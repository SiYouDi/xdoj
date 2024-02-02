#include<stdio.h>
#include<windows.h>//使用Sleep
#include<stdlib.h>//使用system("cls") 
int main()
{
	int n ;
	scanf("%d",&n);
	char arr2[n];
	scanf("%s",arr2);
	char arr1[n];
	for(int i = 0;i<n;i++)
	{
		arr1[i]='#';
	}
	for(int j = 0;j<=(n-1)/2;j++)
	{
		printf("%s\n",arr1);
		Sleep(1000);
		system("cls");
		arr1[j]=arr2[j];
		arr1[n-j-1]=arr2[n-j-1];
	}
	printf("%s",arr1);
	return 0;
}
