#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch;
	if(argc!=3)
	{
		printf("Invalid argument\n");
		exit(1);
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	if(fp1==NULL||fp2==NULL)
	{
		printf("File not found\n");
		exit(1);
	}
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	printf("\nFile successfully copied");
	fclose(fp1);
	fclose(fp2);
	getch();
}
