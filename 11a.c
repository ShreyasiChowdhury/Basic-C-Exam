#include <stdio.h>
int main()
{
	int n,i,j;
	int arr[100];
	printf("Enter the how many numbers you want to sort: ");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&arr[i]);
	}
	//sorting
	int temp=0;
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-1;++j)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nNumbers after sorting in ascending order is:\n");
	for(i=0;i<n;++i)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
