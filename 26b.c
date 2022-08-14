#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("Enter the numbers of rows and columns of array respectively:\n");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	printf("Enter the elements of array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix you entered is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	int trans[n][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			trans[j][i]=arr[i][j];
		}
	}
	printf("The transpose of the matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
}
