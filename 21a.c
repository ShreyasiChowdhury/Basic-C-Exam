#include<stdio.h>
#include<math.h>
float simple(float p,float r,float t)
{
	float si;
	si=(p*r*t)/100;
	return si;
}
float compound(float p,float r,float t)
{
	float a,ci;
	a=p*(pow((1+r/100),t));
	ci=a-p;
	return ci;
}
int main()
{
	float p,r,t,si,ci;
	printf("::INTEREST CALCULATOR::\n\n");
	printf("Enter Principle: ");
	scanf("%f",&p);
	printf("Enter Rate: ");
	scanf("%f",&r);
	printf("Enter Time: ");
	scanf("%f",&t);
	si=simple(p,r,t);
	ci=compound(p,r,t);
	printf("\nSimple Interest = %0.2f",si);
	printf("\nCompound Interest = %0.2f",ci);
	return 0;
}
