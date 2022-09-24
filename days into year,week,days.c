#include<stdio.h>
int main()
{
	int year,week,days,D;
	printf("Enter D=");
	scanf("%d",&D);
	
	year =(D/365);
	
	week=((D%365)/7);
	
	days=((D%365)%7);
	
	printf("YEAR = %d\n",year);
	printf("WEEK = %d\n",week);
	printf("DAYS = %d\n",days);
	
}