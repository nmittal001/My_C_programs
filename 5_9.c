#include<stdio.h>
static char daytab[2][13]={
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int day_of_year(int year,int month,int day);
void month_day(int year,int yearday,int *,int *);
int main(void)
{
	int day,month,year,pmonth,pday;
	printf("enter the year\n");
	scanf("%d",&year);
	printf("enter the month\n");
        scanf("%d",&month);
	printf("enter the day\n");
        scanf("%d",&day);
	if(month>13)
	{
		printf("enter the valid month");
		return 0;
	}
	if(day>32)
	{
                printf("enter the valid day");
		return 0;
	}

	day=day_of_year(year,month,day);
	printf("%d\n",day);
	printf("\nenter the year for detection of month");
	scanf("%d",&year);
	printf("\nenter the day");
	scanf("%d",&day);
	month_day(year,day,&pmonth,&pday);
	printf("\nyour month=%dand day=%d",pmonth,pday);
	return 0;
}
int day_of_year(int year,int month,int day)
{
	int i,leap;
	leap=year%4==0&&year%100!=0||year%400==0;
	for(i=1;i<month;i++)
		day+=daytab[leap][i];
	return day;
}
/* month_day: set month,day from day of year */
void month_day(int year,int yearday,int *pmonth,int *pday)
{
	int i,leap;
	leap=year%4==0&&year%100!=0||year%400==0;
	for(i=1;yearday>daytab[leap][i];i++)
		yearday-=daytab[leap][i];
	*pmonth=i-1;
	*pday=yearday;
	
}
