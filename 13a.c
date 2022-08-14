#include<stdio.h>
int main()
{
	int i,j,n,even=0,odd=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(arr+i)%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\nNumbers of even: %d",even);
	printf("\nNumbers of odd: %d",odd);
	return 0;
}
