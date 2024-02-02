#include<stdio.h>
#include<string.h>
int main()
{
	char m[3]={'\0'};
	char s[50]={'\0'};
	gets(m);
	gets(s);
	int num=0;
	char* p=strstr(s,m);
	while(p!=NULL)
	{
		*p='*';
		num++;
		p=strstr(s,m);
	}
	printf("%d",num);
	return 0;
}
