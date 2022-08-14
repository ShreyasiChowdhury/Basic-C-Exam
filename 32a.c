#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	int i,j,vowel=0,space=0,character=0,total=0;
	fp=fopen("test.txt","r");
	if(fp==NULL)
	{
		printf("File can not be opened");
		exit(1);
	}
	printf("Content of the file:\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
		total++;
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||
		ch=='i'||ch=='I'||ch=='o'||ch=='O'||
		ch=='u'||ch=='U')
		{
			vowel++;
		}
		else if(ch==' ')
		{
			space++;
		}
		else if((ch>=33&&ch<=47)||
		(ch>=58&&ch<=64)||
		(ch>=91&&ch<=96)||
		(ch>=123&&ch<=126))
		{
			character++;
		}
	}
	printf("\n\nTotal character = %d\nVowel = %d\nSpace = %d\nSpecial character = %d",total,vowel,space,character);
	fclose(fp);
}
