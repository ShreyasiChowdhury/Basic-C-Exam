#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc,char *argv[])
{
	int sub1,sub2,sub3,sub4,sub5;
	float per;
	if(argc!=6)
	{
		printf("Invalid argument\n");
		exit(1);
	}
	sub1=atoi(argv[1]);
	sub2=atoi(argv[2]);
	sub3=atoi(argv[3]);
	sub4=atoi(argv[4]);
	sub5=atoi(argv[5]);
	per=((float)sub1+(float)sub2+(float)sub3+(float)sub4+(float)sub5)/5;
	printf("\nPercentage is: %0.2f",per);
	return 0;
}
