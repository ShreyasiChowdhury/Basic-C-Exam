#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc,char *argv[])
{
	int a,b,c;
	if(argc!=4)
	{
		printf("Invalid argument\n");
		exit(1);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	if(a==b&&b==c&&c==a)
	{
		printf("\nAll numbers are equal\n");
	}
	else
	{
		if(a>=b&&a>=c)
			printf("%d is largest\n",a);
		else if(b>=a&&b>=c)
			printf("%d is largest\n",b);
		else if(c>=a&&c>=b)
			printf("%d is largest\n",c);
	}
	return 0;
}
