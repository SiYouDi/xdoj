#include<stdio.h>
#include<math.h>
int main()
{
	int n ;
	scanf("%d",&n);
	double arr[n];
	float sum=0;
	for(int i =0;i<n;i++)
	{
		scanf("%lf",&arr[i]);
		sum+=arr[i];
	}
	double xb=sum/n;
	double sum_pow=0;
	for(int i =0;i<n;i++)
	{
		sum_pow+=pow(arr[i]-xb,2);
	}
	double ret=sum_pow/(n-1);
	double s=sqrt(ret);
	int num =0;
	for(int i =0;i<n;i++)
	{
		if(arr[i]<xb-3*s||arr[i]>xb+3*s)
			num++;
	}
	printf("%.4lf %d",s,num);
	return 0;
}
