#include<stdio.h>
int main()
{
	int i,r,temp,start,end,sum;
	printf("Enter starting number of the range: ");
	scanf("%d",&start);
	printf("Enter ending number of the range: ");
	scanf("%d",&end);
	printf("Amstrong numbers in given range are:\n");
	for(i=start;i<=end;i++)
	{
		temp=i;
		sum=0;
		while(temp!=0)
		{
			r=temp%10;
			temp=temp/10;
			sum=sum+(r*r*r);
		}
		if(sum==i)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
