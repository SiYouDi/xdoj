#include<stdio.h>
int main()
{
	float s, money;
	int t, money1;
	scanf("%f %d", &s, &t);
	if (s <= 3)
	{
		money = 10;
	}
	else if (s <= 10&&s>3)
	{
		money = 10 + 2 * (s - 3);
	}
	else if (s > 10)
	{
		money = 10 + 2 * 7 + 3 * (s - 10);
	}
	money = money + 2 * (t / 5);
	money1 = (int)(money + 0.5);
	printf("%d", money1);
	int c=1;
	printf("%d",c);
	return 0;
}
