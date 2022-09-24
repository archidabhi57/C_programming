#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,total,percentage;
	printf("Enter marks of Sub1=");
	scanf("%f",&sub1);
	
	printf("Enter marks of Sub2=");
	scanf("%f",&sub2);
	
	printf("Enter marks of Sub3=");
	scanf("%f",&sub3);
	
	printf("Enter marks of Sub4=");
	scanf("%f",&sub4);
	
	printf("Enter marks of Sub5=");
	scanf("%f",&sub5);
	
	total = (sub1+sub2+sub3+sub4+sub5);
	printf("Total = %f\n",total);
	
	percentage = ((total/500)*100);
	printf("Percentage = %f",percentage);
}