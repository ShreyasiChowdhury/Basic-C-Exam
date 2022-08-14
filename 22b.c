#include<stdio.h>
int check(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year,output;
	printf("Enter your year: ");
	scanf("%d",&year);
	output=check(year);
	if(output==1)
	{
		printf("%d is a Leap Year",year);
	}
	else
	{
		printf("%d is a Common Year",year);
	}
	return 0;
}
