#include<stdio.h>
int main()
{
	char arr[50]={'\0'};
	gets(arr);
	int i=0;
	int p=0;
	int sum=0;
	while(arr[i]!='\0')
	{
		if(arr[i]>='a'&&arr[i]<='f')
		{
			sum+=arr[i]-'a'+10;
			p=1;
		}
		else if(arr[i]>='A'&&arr[i]<='F')
		{
			sum+=arr[i]-'A'+10;
			p=1;
		}
		else if(arr[i]>='0'&&arr[i]<='9')
		{
			sum+=arr[i]-'0';
			p=1;
		}
		i++;
	}
	if(p)
	{
		printf("%d",sum);
	}
	else
	{
		printf("NO");
	}
	return 0;
}
