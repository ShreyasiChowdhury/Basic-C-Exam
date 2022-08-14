//1-2+3-4... up to nth term
#include<stdio.h>
int series(int n)
{
	int i,j,total=0,sum_even=0,sum_odd=0;	
	printf("Series is:\n");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("+%d ",i);
			sum_even=sum_even+i;
		}
		if(i%2==0)
		{
			printf("-%d ",i);
			sum_odd=sum_odd+(0-i);
		}
	}
	total=sum_even+sum_odd;
	return total;
}
int main()
{
	int n,total=0;
	printf("Enter the limit of the series (n): ");
	scanf("%d",&n);
	total=series(n);
	printf("\nSum of the series 1-2+3-4+... is: %d",total);
	return 0;
}
