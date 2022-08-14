#include<stdio.h>
struct student
{
	int roll;
	char name[100];
	float marks;
}s;
int main()
{
	printf("::STUDENT DETAILS::\n\n");
	printf("Enter roll no of the student:\n");
	scanf("%d",&s.roll);
	printf("Enter full name of the student:\n");
	fflush(stdin);
	gets(s.name);
	printf("Enter total marks of the student:\n");
	scanf("%f",&s.marks);
	//display
	printf("\n\nDetails of the student::\n");
	printf("Roll: %d",s.roll);
	printf("\nName: %s",s.name);
	printf("\nMarks: %0.2f\n",s.marks);
	return 0;
}
