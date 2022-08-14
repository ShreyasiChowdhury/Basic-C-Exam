#include<stdio.h>
#include<string.h>
int main()
{
	char num[10];
	int i;
	printf("Enter a number: ");
	scanf("%s",&num);
	printf("Digits in words:\n");
	for(i=0;i<10;i++)
	{
		switch(num[i])
		{
			case '0':
				{
					printf("Zero ");
					break;
				}
			case '1':
				{
					printf("Zero ");
					break;
				}
			case '2':
				{
					printf("Zero ");
					break;
				}
			case '3':
				{
					printf("Zero ");
					break;
				}
			case '4':
				{
					printf("Four ");
					break;
				}
			case '5':
				{
					printf("Five ");
					break;
				}
			case '6':
				{
					printf("SIx ");
					break;
				}
			case '7':
				{
					printf("Seven ");
					break;
				}
			case '8':
				{
					printf("Eight ");
					break;
				}
			case '9':
				{
					printf("Nine ");
					break;
				}
		}
	}
	return 0;
}
