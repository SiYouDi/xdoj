#include<stdio.h>
#include<string.h>
void reverse(char* left,char* right)
{
	while(left<right)
	{
		char tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100]={0};
	gets(arr);
	int len=strlen(arr);
	reverse(arr,arr+len-1);
	char* start=arr;
	char* end=start;
	while(*start!='\0')
	{
		while(*end!=' '&&*end!='\0')
		{
			end++;
		}
		reverse(start,end-1);
		if(*end==' ')
			end++;
		start=end;
	}
	printf("%s",arr);
}
