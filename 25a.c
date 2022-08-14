#include<stdio.h>
int main()
{
	int n,i,sum,start,end;
	printf("Enter a starting range: ");
	scanf("%d",&start);
	printf("Enter a ending range: ");
	scanf("%d",&end);
	printf("Perfect numbers within the given range:\n");
	for(n=start;n<=end;n++)
	{
		sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==n)
		{
			printf("%d\t",n);
		}
	}
	return 0;
}
