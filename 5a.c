#include<stdio.h>
int main()
{
	int i,num,prime=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("%d is neither prime nor composite",num);
	}
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				prime=0;
				break;
			}
		}
		if(prime)
			printf("%d is prime",num);
		else
			printf("%d is composite",num);
	}
	return 0;
}
