#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*target;
	char ch;
	int i;
	char s[]="Hello World\n";
	fp=fopen("f1.txt","r");
	if(fp==NULL)
	{
		printf("File can not be opened");
		exit(1);
	}
	for(i=0;i<strlen(s);i++)
	{
		fputc(s[i],fp);
	}
	target=fopen("f2.txt","w");
	if(target==NULL)
	{
		printf("File not found");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,target);
	}
	printf("File successfully copied");
	fclose(fp);
	fclose(target);
	return 0;
}
