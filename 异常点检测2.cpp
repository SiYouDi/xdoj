#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	double arr[n];
	double sum=0;
	for(int i =0;i<n;i++)
	{
		scanf("%lf",&arr[i]);
		sum+=arr[i];
	}
	double ret=sum/n;
	double sum2=0;
	for(int i =0;i<n;i++)
	{
		sum2+=pow(arr[i]-ret,2);
	} 
	double s=sqrt(sum2/(n-1));
	int num=0;
	for(int i =0;i<n;i++)
	{
		if(arr[i]>ret+3*s||arr[i]<ret-3*s)
		{
			num++;
		}
	}
	printf("%.4lf %d",s,num);
	return 0;
}
