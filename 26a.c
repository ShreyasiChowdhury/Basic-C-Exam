#include<stdio.h>
int swap(int a,int b)
{
	b=a+b;
	a=b-a;
	b=b-a;
	printf("Numbers after swapping:\n");
	printf("%d\t%d",a,b);
}
int main()
{
	int a,b;
	printf("Input two numbers to swap:\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}
