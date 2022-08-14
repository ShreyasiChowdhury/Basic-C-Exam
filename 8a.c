#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter line number: ");
	scanf("%d",&n);
	printf("\nPattern is:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i&&j<=n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
