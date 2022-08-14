#include<stdio.h>

int main()
{
    int i,j,n,m,sum=0;
	printf("Enter the numbers of rows and columns of array respectively: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter the elements of array: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("Sum is = %d",sum);
    return 0;
}
