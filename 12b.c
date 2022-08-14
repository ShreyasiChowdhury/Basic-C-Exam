#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,bin,dec=0,rem;
	printf("::BINARY <-> DECIMAL::\n\n");
	printf("Enter the binary number: ");
	scanf("%d",&bin);
	for(i=0;bin!=0;i++)
	{
		rem=bin%10;
		bin=bin/10;
		dec=dec+rem*(pow(2,i));
	}
	printf("The number in decimal is: %d",dec);
	return 0;
}
