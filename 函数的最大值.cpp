#include<stdio.h>
#include<math.h>
int main()
{
	double max=0;
	double a;
	scanf("%lf",&a);
	for(float i =0;i<10.0001;i+=0.0001)
	{
		double fx=-pow(i,3)+a*pow(i,2);
		if(fx>=max)
			max=fx;
	}
	printf("%.2lf",max);
	return 0;
}
