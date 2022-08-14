//Numbers Swapinng using Third Variable
#include<stdio.h>
int swap(int num1,int num2)
{
	int temp=0;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("First number: %d",num1);
	printf("\nSecond number: %d",num2);
}
int main()
{
	int num1,num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("\nAfter swapping:\n");
	swap(num1,num2);
	return 0;
}
