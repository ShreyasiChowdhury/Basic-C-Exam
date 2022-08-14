#include<stdio.h>
int factorial(int n);

int main()
{
	int n,r,ncr;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the value of r: ");
	scanf("%d",&r);
	ncr=factorial(n)/(factorial(n-r)*factorial(r));
	printf("\nnCr=%d\n",ncr);
	printf("%d!=%ld",n,factorial(n));
	return 0;
}
int factorial(int n)
{
	int fact=1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
