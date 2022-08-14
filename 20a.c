#include<stdio.h>
int product(int n)
{
	if(n==1)
		return 1;
	return n*product(n-1);
}
int main()
{
	int n=10,x;
	x=product(n);
	printf("Product is: %d",x);
	return 0;
}
