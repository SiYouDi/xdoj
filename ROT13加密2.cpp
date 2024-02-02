#include<stdio.h>
int main()
{
	char arr[61];
	gets(arr);
	int i=0;
	while(arr[i]!='\0')
	{
		if(arr[i]>='a'&&arr[i]<='z')
		{
			if(arr[i]<='m')
				arr[i]+=13;
			else
				arr[i]-=13;
		}
		else if(arr[i]>='A'&&arr[i]<='Z')
		{
			if(arr[i]<='M')
				arr[i]+=13;
			else
				arr[i]-=13;
		}
		i++;
	}
	puts(arr);
	return 0;
}
