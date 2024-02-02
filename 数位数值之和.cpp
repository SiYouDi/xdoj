#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	int arr[4];
	j=0;
	k=0;
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		j+=i;
		n/=10;
		arr[k]=i;
		k++;
	}
	for(l=3;l>-1;l--)
	{
		printf("%d ",arr[l]);
	}
	printf("%d",j);
	return 0;
}
