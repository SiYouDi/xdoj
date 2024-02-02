#include<stdio.h>
int main()
{
	int n ;
	scanf("%d",&n);
	int numj=0;
	int numo=0;
	int numc=0;
	for(int i =n;i<=n*n;i++)
	{
		if(i%2!=0)
			numj++;
		else
			numo++;
		if(i%4==0&&i%3!=0)
			numc++;
	}
	int sum=numj+numo;
	printf("%d %d %d\n",numj,numo,numc);
	printf("%d",sum);
	return 0;
}
