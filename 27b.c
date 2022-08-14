#include<stdio.h>
int main()
{
	int i,j,n,m,check;
	printf("Enter rows or column number of a square matrix:\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int trans[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			trans[j][i]=arr[i][j];
		}
	}
	check=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]!=trans[i][j])
			{
				check=0;
				break;
			}
		}
	}
	printf("The matrix you entered is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	if(check==1)
	{
		printf("\nGiven matrix is symmetric");
	}
	else
	{
		printf("\nGiven matrix is not symmetric");
	}
	return 0;
}
