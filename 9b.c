#include<stdio.h>
int main()
{
	int count_word=0,i;
	char str[100];
	printf("Enter the string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count_word++;
		}
	}
	printf("\nNumber of words = %d",count_word+1);
	return 0;
}
