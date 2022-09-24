#include<stdio.h>
int main()
{
	float Fahrenhiet,Celsius;
	printf("Enter Celsius=");
	scanf("%f",&Celsius);
	
	Fahrenhiet=((Celsius*(5/9))+32);
	printf("%f",Fahrenhiet);
}