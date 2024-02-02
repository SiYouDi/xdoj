#include<stdio.h>
int main()
{
	int s,v,h,m;
	float tmin;
	scanf("%d %d",&s,&v);
	if(s%v==0)
	{
		tmin=s/v*1.0+10;
	}
	else
	{
		tmin=(s+1)/v*1.0+10;
	}
	if(tmin>=60*8&&tmin<=60*24)
	{
		h=23;
		m=tmin-60*8;
		while(m>=60)
		{
			m-=60;
			h-=1;
		}
		printf("%02d:%02d",h,60-m-1);
	}
	else if(tmin<60*8)
	{
		h=7;
		m=tmin;
		while(m>=60)
		{
			m-=60;
			h-=1;
		}
		printf("%02d:%02d",h,60-m-1);
	}
	return 0; 
} 
