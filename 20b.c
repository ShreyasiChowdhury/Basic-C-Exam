#include<stdio.h>
int factorial(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int num,r,n1;
	int result=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	n1=num;
	while(num!=0)
	{
        r=num%10;
        result+=factorial(r);
        num/=10;
    }
    if(result==n1)
        printf("%d is a strong number",n1);
    else
        printf("%d is not a strong number",n1);
    return 0;
}
