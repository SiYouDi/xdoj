#include<stdio.h>
int main()
{
	int a,b,c,n,m,k,i,w[20000],max,min;
	scanf("%d %d",&a,&b);
	k=0;
	for(i=2;i<1000;i++)
	{
		for(n=2;n<i;n++)
		{
			if(i%n==0)
			{
			break;
			}
		}
		if(n>=i)
		{
	
		w[k-1]=i;
		k++; 
		}
	}
	m=0;
	if(a<=b)
	{
	max=b;min=a;
	}
	else{max=a;min=b;}
	for(k=min;k<=max;k++)
	{
		m=m+w[k];
	}
	printf("%d\n",w[20000]);
	printf("%d",m);
	return 0;
}
