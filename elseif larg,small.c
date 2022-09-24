#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter Number1:");
	scanf("%d",&num1);
	
	printf("Enter Number2:");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		printf("Number1 is largest");
	}
	else if(num2>num1)
	{
		printf("Number2 is largest");
	}
	else
	{
		printf("Number is equal");
	}
}