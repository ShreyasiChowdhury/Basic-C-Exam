#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("\nNumbers are:\n");
	for(i=0;i<=n;i++)
	{
		if((i%7==0)&&(i%3!=0))
		{
			printf("%d ",i);
		}
	}
	return 0;
}
