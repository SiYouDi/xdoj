#include<stdio.h>
int main()
{
	double a;
	scanf("%lf",&a);
	double max=0;
	for(float i =0;i<10.0001;i+=0.0001)
	{
		double fx=-i*i*i+a*i*i;
		if(fx>=max)
			max=fx;
	}
	printf("%.2lf",max);
	return 0;
}
