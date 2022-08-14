#include<stdio.h>
int main()
{
	int i,num1,num2,hcf,lcm;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	for(i=1;i<=num1;i++)
	{
		if((num1%i==0)&&(num2%i==0))
			hcf=i;
	}
	lcm=(num1*num2)/hcf;
	printf("\nLCM = %d",lcm);
	return 0;
}
