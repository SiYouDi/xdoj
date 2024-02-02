#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int sum_even=0;
	int sum_odd=0;
	int p1=0;
	int p2=0;
	int i=1;
	while(p1<m||p2<(m-1))
	{
		int an=3*(i-1)*(i-1)+2*(i-1)+1;
		if(an>100&&an%2==0&&p1<m)
		{
			sum_even+=an;
			p1++;
		}
		else if(an>100&&an%2==1&&p2<(m-1))
		{
			sum_odd+=an;
			p2++;
		}
		i++;
	}
	printf("%d %d",sum_even,sum_odd);
	return 0;
}
