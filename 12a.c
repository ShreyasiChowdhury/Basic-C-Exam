#include<stdio.h>
int main()
{
	int i,j,n,x,sum=0,sum_x=0,total=0;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the limit of the series (n): ");
	scanf("%d",&n);
	sum_x=x*n;
	for(i=0;i<n;i++)
	{
		sum=sum+(0-i);
	}
	total=sum_x+sum;
	printf("Sum of the series x+(x-1)+(x-2)+...+(x-n) is: %d",total);
	return 0;
}
