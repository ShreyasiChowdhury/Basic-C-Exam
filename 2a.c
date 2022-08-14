#include<stdio.h>
int power(int,int);
int main()
{
	int a,b,c;
	printf("Enter the values of a and b: ");
	scanf("%d%d",&a,&b);
	c=power(a,b);
	printf("Result is %d",c);
}
int power(int x,int y)
{
	int z;
	if(y==0)
	{
		return 1;
	}
	else
	{
		if(y==1)
		{
			return x;
		}
		else
		{
			z=x*power(x,y-1);
		}
	}
	return z;
}
