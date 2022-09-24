#include<stdio.h>
int main()
{
	float height,base,areaOfTri;
	printf("Enter Height=");
	scanf("%f",&height);
	printf("Enter Base=");
	scanf("%f",&base);
	
	areaOfTri = ((height*base)/2);
	printf("%f",areaOfTri);	
}
