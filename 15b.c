#include<stdio.h>
float temp(float C)
{
	float F;
	F=(C*9/5)+32;
	return F;	
}
int main()
{
	float C,F;
	printf("::Temperature Conversion::\n\n");
	printf("Enter temperature in Celsius: ");
	scanf("%f",&C);
	F=temp(C);
	printf("\nIn Degree Fahrenheit = %.2f",F);
	return 0;
}
