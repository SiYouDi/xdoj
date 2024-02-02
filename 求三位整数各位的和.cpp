#include<stdio.h>
int main5()
{
	int a,a1,a2,a3;
	scanf("%d",&a);
	a1=a/100;
	a2=(a/10)%10;
	a3=a%10;
	printf("%d",a1+a2+a3);
	return 0;
}
