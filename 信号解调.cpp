#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x,y;
	int s1;
	int s2;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&x,&y);
		s1=(x-4)*(x-4)+(y-4)*(y-4);
		s2=(x+4)*(x+4)+(y+4)*(y+4);
		if(s1>s2)
			printf("2 ");
		else 
			printf("1 ");
	}
	return 0;
}
