#include<stdio.h>
int main()
{
	float Fahrenhiet,Celsius;
	printf("Enter Fahrenhiet=");
	scanf("%f",&Fahrenhiet);
	
	Celsius=(((Fahrenhiet-32)*5)/9);
	printf("%f",Celsius);
}