#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100]={'\0'};
	char arr2[100][100]={'\0'};
	gets(arr1);
	int len=strlen(arr1);
	int snum=0;
	int a1num=0;
	int col=0;
	int row=0;
	while(snum<len)
	{
		arr2[row][col++]=arr1[a1num];
		snum++;
		a1num++;
		if(arr1[a1num]==' ')
		{
			a1num++;
			row++;
			col=0;
		}
	}
	int i=row;
	int j=0;
	int num=0;
	while(num<=row)
	{
		while(arr2[i][j]!='\0')
		{
			printf("%c",arr2[i][j++]);
		}
		printf(" ");
		i--;
		j=0;
		num++;
	}
}
