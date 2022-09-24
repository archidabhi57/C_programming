#include<stdio.h>
int main()
{
	int number;
	printf("Enter Number1=");
	scanf("%d",&number);
	
	
	if(number>0)
	{
		printf("Number is Positive");
	}
	if(number<0)
	{
		printf("Number is Negative");
	}
	if(number==0)
	{
		printf("Number is Zero");
	}
}