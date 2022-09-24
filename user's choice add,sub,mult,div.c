#include<stdio.h>
int main()
{
	float no1,no2,ch,add,sub,multi,div;
	printf("Enter Number1=");
	scanf("%f",&no1);
	
	printf("Enter Number2=");
	scanf("%f",&no2);
	
	printf("1 for add\n 2 for sub\n 3 for multi\n 4 for div\n");
	printf("Enter ch=");
	scanf("%f",&ch);
	
	if(ch==1)
	{
		add= no1+no2;
		printf("Addition = %f",add);
	}
	
	if(ch==2)
	{
		sub= no1-no2;
		printf("Subtract = %f",sub);
	}
	
	if(ch==3)
	{
		multi= no1*no2;
		printf("Multiply = %f",multi);
	}
	
	if(ch==4)
	{
		div= no1/no2;
		printf("Division=%f",div);
	}
}