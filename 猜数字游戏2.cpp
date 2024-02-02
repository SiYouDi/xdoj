
#include<stdio.h>
int main()
{
	int x,N,y;
	int n;
	scanf("%d %d",&x,&N);
	for(n=1;n<=N+1;n++)
	{
		scanf("%d",&y);
	if(y==x||y<0){
    break;
	}	
	else if(y>x){if(n<N+1){
		printf("Too big\n");}
	}
	else {
	if(n<N+1){
	
		printf("Too small\n");
}
	}
	}
	if(y==x){
		if(n==1){
			printf("Bingo!\n");
		}
		else if(n==2||n==3)
		{
			printf("Lucky You!\n");
		}
		else{
			printf("Good Guess!\n");
		}
	}
	if(y!=x){
		printf("Game Over\n");
	}
	return 0;
}
