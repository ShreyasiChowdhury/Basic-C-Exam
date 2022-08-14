#include <stdio.h>
int max(int a,int b,int c)
{
	printf("\n\n");
	if(a>=b&&a>=c)
		printf("%d is largest",a);
	else if(b>=a&&b>=c)
		printf("%d is largest",b);
	else if(c>=a&&c>=b)
		printf("%d is largest",c);
}
int min(int a,int b,int c)
{
	printf("\n");
	if(a<=b&&a<=c)
		printf("%d is smallest",a);
	else if(b<=a&&b<=c)
		printf("%d is smallest",b);
	else if(c<=a&&c<=b)
		printf("%d is smallest",c);
}
int main ()
{
	int a,b,c;
	printf("::Maximum between three numbers::");
	printf("\n\nEnter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	{
		printf("\nAll numbers are equal");
	}
	else
	{
		max(a,b,c);
		min(a,b,c);
	}
	return 0;
}
