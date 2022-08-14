#include<stdio.h>
int fibo(int);
int main()
{
	int i,n,a,b,c;
	a=0,b=1,c=0;
	printf("Enter the last range: ");
	scanf("%d",&n);
	printf("\nFibonacci series upto %d terms:\n",n);
	while(c<=n)
	{
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
