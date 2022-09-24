#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("Enter a=");
	scanf("%f",&a);
	
	printf("Enter b=");
	scanf("%f",&b);
	
	printf("Enter c=");
	scanf("%f",&c);
	
	d=((b*b)-(4*a*c));
	if(d>0)
	{
		r1=((-b)+sqrt(d)/(2*a));
		r2=((-b)-sqrt(d)/(2*a));
		
		printf("r1=%f",r1);
		printf("r2=%f",r2);
	}
	
	if(d==0)
	{
		r1=r2=(-b/2*a);
		printf("r1=r2=%f",r1,r2);
	}
	
	if(d<0)
	{
		r1=(-b/2*a);
		r2=(sqrt(d)/2*a);
		
		printf("r1=%f+i%f",r1,r2);
		printf("r1=%f-i%f",r1,r2);
	}
	
	
}