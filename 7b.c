#include<stdio.h>
int main()
{
	int count_word=0,count_char=0,i;
	char str[100];
	printf("Enter the string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count_char++;
		if(str[i]==' ')
		{
			count_word++;
		}
	}
	printf("\nNumber of words = %d",count_word+1);
	printf("\nNumber of characters = %d",count_char);
	return 0;
}
