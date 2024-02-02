#include<stdio.h>
#include<string.h>
int main()
{
	char arr[50]={"\0"};
	scanf("%s",arr);
	int len =strlen(arr);
	int sum=0;
	int num=0;
	for(int i =0;i<len;i++)
	{
		if(arr[i]>='0'&&arr[i]<='9')
			sum+=(arr[i]-48);
		else if(arr[i]>='A'&&arr[i]<='F')
			sum+=(arr[i]-55);
		else if(arr[i]>='a'&&arr[i]<='f')
			sum+=(arr[i]-87);
		else
			num++;
	}
	if(num!=len)
		printf("%d",sum);
	else
		printf("NO");
	return 0;
}
