#include<stdio.h>
int main()
{
	int n;
	int d[6]={0,0,0,0,0,0};
	int sum=0;
	int i=0;
	float p=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	p=sum;
	p=p/n*1.0;
	printf("%.2f\n",p);
	for(i=0;i<n;i++)
	{
		p=arr[i];
		if(p>=0&&p<=50)
		{
			d[0]+=1;
		}
		else if(p>=51&&p<=100)
		{
			d[1]+=1;
		}	 
		else if(p>=101&&p<=150)
		{
			d[2]+=1;
		} 
		else if(p>=151&&p<=200)
		{
			d[3]+=1;	
		}
		else if(p>=201&&p<=300)
		{
			d[4]+=1;
		}
		else
		{
			d[5]+=1;
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",d[i]);
	}
	return 0;
}
