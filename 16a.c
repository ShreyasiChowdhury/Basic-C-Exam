#include<stdio.h>
int fibo(int);
int main()
{
	int i,n,a;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("\nThe series is:");
	for(i=0;i<n;i++)
	{
		a=fibo(i);
		printf("\n%d",a);
	}
}
int fibo(int x)
{
	if(x==0||x==1)
	{
		return x;
	}
	else
	{
		return(fibo(x-1)+fibo(x-2));
	}
}
