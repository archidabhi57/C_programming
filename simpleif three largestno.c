#include<stdio.h>
int main()
{
	int no1,no2,no3;
	printf("Enter Number1=");
	scanf("%d",&no1);
	
	printf("Enter Number2=");
	scanf("%d",&no2);
	
	printf("Enter Number3=");
	scanf("%d",&no3);
		
	if(no1>no2 && no1>no3)
	{
		printf("Number1 is Largest");
	}
	if(no1<no2 && no2>no3)
	{
		printf("Number2 is Largest");
	}
	
	if(no3>no1 && no3>no2)
	{
		printf("Number3 is Largest");
	}
}