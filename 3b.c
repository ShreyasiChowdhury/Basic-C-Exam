#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of row: ");
	scanf("%d",&n);
	printf("\n\nPattern is:\n");
	for(i=1;i<=n;i++)
	{
		int k=65;
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			{
				printf("%c",k);
				k++;
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
