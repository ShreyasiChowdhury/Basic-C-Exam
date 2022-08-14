#include<stdio.h>
int main()
{
	int n,i,max;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		max=a[0];
		for(i=1;i<n;i++)
		{
			if(max<a[i])
			{
				max=a[i];
			}
		}
	}
	printf("\nLargest number is: %d",max);
}
