#include<stdio.h>
struct stu
{
	int years;
	int months;
	int day;
	int days;
};
int main()
{
	struct stu list;	
	scanf("%d/%d/%d",&list.years,&list.months,&list.day);
	list.days=0;
	for(int i =list.months-1;i>0;i--)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				list.days+=31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				list.days+=30;
				break;
			default:
				if((list.years%4==0&&list.years%100!=0)||(list.years%400==0))
				{
					list.days+=29;
				}
				else
				{
					list.days+=28;
				}
				break;
		}
	}
	list.days+=list.day;
	printf("%d\n%d\n%d\n%d\n",list.years,list.months,list.day,list.days);
	return 0;
}
