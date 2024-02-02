#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		int s1=(x-4)*(x-4)+(y-4)*(y-4);
		int s2=(x+4)*(x+4)+(y+4)*(y+4);
		if(s1<s2)
			printf("1 ");
		else
			printf("2 ");
	}
	return 0;
}
