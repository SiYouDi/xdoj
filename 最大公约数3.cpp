#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    if(a==0||b==0)
    {
    	if(a==0)
    	{
    		printf("%d\n",b);	
		}
    	if(b==0&&a!=0)
    	{
    		printf("%d\n",a);
		}
	}
	else
	{
   		while(a!=b&&a!=0&&b!=0)
   		{
        	if(a>b)
        	a = a - b;
        	if(a<b)
        	b = b - a;
 		}
		 printf("%d\n",a);	
	}
    return 0;
}

