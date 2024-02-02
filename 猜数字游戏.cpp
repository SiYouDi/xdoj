#include<stdio.h>
int main()
{
	int n;
	int num;
	int nums=0;
	scanf("%d %d",&num,&n);
	int gus;
	while(scanf("%d",&gus)==1)
	{
		nums++;
		if(gus==num||gus<0||(num!=gus&&nums==n))
			break;
		else if(gus<num)
			printf("Too small\n");
		else if(gus>num)
			printf("Too big\n");
		
	}
	if(gus>=0&&gus==num)
	{
		if(nums<=1)
			printf("Bingo!\n");
		else if(nums>1&&nums<=3)
			printf("Lucky You!\n");
		else if(nums<=n&&nums>3&&n>3)
			printf("Good Guess!\n");
		else if(nums>n)
			printf("Game Over\n");
	}
	else
		printf("Game Over\n");
	return 0;
}
