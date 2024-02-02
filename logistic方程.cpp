#include<stdio.h>
#include<math.h>
int main()
{
	float x,r;
	scanf("%f %f",&x,&r);
	int num=0;
	for(int i=2;i<=1000;i++)
	{
		float temp=x;
		x=r*temp*(1-temp);
		if(fabs(x-temp)<0.00001)
		{
			num=1;
			break;
		}
	}
	printf("%.4f %d",x,num);
	return 0;
}
