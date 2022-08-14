#include<stdio.h>
int add(int n)
{
	if(n!=0)
	{
		return n+add(n-1);
	}
	else
	{
		return n;
	}
}
int main()
{
	int num;
	num=10;
	printf("Sum is %d",add(num));
	return 0;
}
