#include<stdio.h>
int main()
{
	int BS,HRA,DA,GS;
	printf("enter your basic salary");
	scanf("%d",&BS);
	
	
	if(BS>=10000 && BS<20000)
	{
		HRA=(0.2)*BS;
		DA=(0.8)*BS;
		GS=BS+HRA+DA;
		printf("gross=%d",GS);
		
	}
		
	if(BS>=20000 && BS<30000)
	{
		HRA=(0.25)*BS;
		DA=(0.9)*BS;
		GS=BS+HRA+DA;
		printf("gross=%d",GS);
	}
	
	if(BS>=30000 )
	{
		HRA=(0.3)*BS;
		DA=(0.95)*BS;
		GS=BS+HRA+DA;
		printf("gross=%d",GS);
		
	}
	

}