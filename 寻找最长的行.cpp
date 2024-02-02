#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100][100]={'\0'};
	int max=0;
	int p;
	for(int i=0;i<100;i++)
	{
		gets(arr[i]);	
		if(strcmp(arr[i],"***end***")==0)
			break;
		if(strlen(arr[i])>max)
		{
			max=strlen(arr[i]);
			p=i;	
		}
	}
	printf("%d\n%s",max,arr[p]);
	return 0;
}
