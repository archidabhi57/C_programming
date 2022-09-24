#include<stdio.h>
int main()
{
	float principal,roi,timeperiod,simpleInt;
	printf("Enter Principal=");
	scanf("%f",&principal);
	
	printf("Enter roi=");
	scanf("%f",&roi);
	
	printf("Enter Timeperiod=");
	scanf("%f",&timeperiod);
	
	simpleInt = (principal*roi*timeperiod);
	printf("%f",simpleInt);
}