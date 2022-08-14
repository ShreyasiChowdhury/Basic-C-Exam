/*
Define a union with members
integer, string and float and illustrate
the use of the UNION
*/
#include<stdio.h>
union member
{
	int roll;
	char name[32];
	float marks;
};
int main()
{
	union member s1;
	printf("::STUDENT DETAILS::\n\n");
	printf("\nEnter roll no of the student:\n");
	scanf("%d",&s1.roll);
	printf("Roll: %d",s1.roll);
	printf("\nEnter full name of the student:\n");
	fflush(stdin);
	gets(s1.name);
	printf("Name: %s",s1.name);
	printf("\nEnter total marks of the student:\n");
	scanf("%f",&s1.marks);
	printf("Marks: %0.2f",s1.marks);
	printf("\n\nSize of this union = %d bytes",sizeof(s1));
	return 0;
}
