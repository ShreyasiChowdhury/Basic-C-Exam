#include<stdio.h>
int power_check(int);
int n,i,count=0;
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	power_check(num);
	if(count==1)
	{
		printf("%d is power of 2",num);
	}
	else
	{
		printf("%d is not power of 2",num);
	}
	return 0;
}
int power_check(int num)
{
	while(num!=0)
	{
		n=num%2;
		if(n==1)
		{
			count++;
		}
		num=num/2;
	}
}
