#include<stdio.h>
int main()
{
	float u,a,t,d;
	printf("Enter u=");
	scanf("%f",&u);
	
	printf("Enter a=");
	scanf("%f",&a);
	
	printf("Enter t=");
	scanf("%f",&t);
	
	d= ((u*t)+(a*(t*t)));
	printf("%f",d);
}