#include<stdio.h>
int main()
{
	int i,n;
	float sum=0,avg=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	float arr[n];
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("Average of elements is: %0.2f",avg);
	return 0;
}
