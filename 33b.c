#include<stdio.h>
int main()
{
	int n,r,sum=0,temp,t,rem,sum_number=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("%d is palindrome",temp);
	}
	else
	{
		printf("%d is not palindrome",temp);
	}
	return 0;
}
