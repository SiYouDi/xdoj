#include<stdio.h>
#include<string.h>
int main()
{
	char dad[20]={"\0"};
	char child[20]={"\0"};
	gets(dad);
	gets(child);
	char* p=strstr(dad,child);
	if(p!=NULL)
		printf("%d",p-dad+1);
	else
		printf("No!");
	return 0;
}
