#include<stdio.h>
int main()
{
	float s;
	int t;
	float money=0;
	scanf("%f %d",&s,&t);
	if(s<=3)
		money=10;
	else if(s>3&&s<=10)
		money=10+2*(s-3);
	else
		money=10+2*7+3*(s-10);
	money+=2*(t/5);
	printf("%.1f",money);
	return 0;
}
