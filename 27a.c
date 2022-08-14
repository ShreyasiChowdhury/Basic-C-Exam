#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter last number: ");
	scanf("%d",&num);
	printf("Prime numbers are:\n");
	i=1;
	printf("%d\t",i);
	for(i=2;i<=num;i++)
	{
		int c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
