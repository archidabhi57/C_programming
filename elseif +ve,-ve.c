#include<stdio.h>
int main()
{
	int number;
	printf("Enter Number");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("Number is Positive");
	}
	else if(number<0)
	{
		printf("Number is Negative");
	}
	else if(number==0)
	{
		printf("Number is Zero");
	}
	else
	{
		printf("Invalid");
	}
}
