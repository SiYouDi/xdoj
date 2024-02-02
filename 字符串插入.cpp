#include<stdio.h>
#include<string.h>
int main()
{
	char imp[40]={"\0"};
	char inter[20]={"\0"};
	char temp[20]={"\0"};
	scanf("%s",imp);
	scanf("%s",inter);
	int len=strlen(inter);
	int n;
	scanf("%d",&n);
	int num=0;
	for(int i=n;i<40;i++)
	{
		temp[num]=imp[i];
		imp[i]=inter[num];
		num++;
	}
	int p=0;
	int i =n+len;
	while(p<=num)
	{
		imp[i++]=temp[p++];
	}
	printf("%s",imp);
	return 0;
}
