#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[100];
	int i,j;
	fp=fopen("file.txt","w");
	if(fp==NULL)
	{
		printf("File can not be opened");
		exit(1);
	}
	printf("Enter a string: ");
	gets(str);
	for(j=0;j<strlen(str);j++)
	{
		fputc(str[j],fp);
	}
	fclose(fp);
	char ch;
	fp=fopen("file.txt","r");
	if(fp==NULL)
	{
		printf("File not found");
		exit(1);
	}
	ch=fgetc(fp);
	//while(ch!=EOF)
	printf("\nString is:\n");
	while(!feof(fp))
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}
