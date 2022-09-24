#include<stdio.h>
int main()
{
	float km,m,ft,inch,cm;
	printf("Enter kilometer=");
	scanf("%f",&km);
	
	m=km*1000;
	printf("Meter= %f\n",m);
	
	ft=km*3280.84;
	printf("Feet= %f\n",ft);
	
	inch= km*39370.1;
	printf("Inches= %f\n",inch);
	
	cm = 100000*km;
	printf("Centimeter= %f\n",cm);

}