#include<stdio.h>
int main()
{
	float x,r;
	scanf("%f %f",&x,&r);
	int num=0;
	for(int i=0;i<=1000;i++)
	{
		float tmp=r*x*(1-x);
		if(tmp-x>=0.00001||tmp-x<=-0.00001)
			x=tmp;
		else
		{
			x=tmp;
			num=1;
			break;
		}
	}
	printf("%.4f %d",x,num);
	return 0;
}
