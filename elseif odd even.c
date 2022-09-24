#include<stdio.h>
int main()
{
	int number;
	printf("Enter number:");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("Number is Even");
	}
	else if(number%2!=0)
	{
		printf("Number is Odd");
	}
	else
	{
		printf("Invalid");
	}
}