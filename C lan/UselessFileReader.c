// Fun reading of file
// character for character

#include <stdio.h>
#include <string.h>

FILE *fp;

int main()
{
	fp = fopen("./treasure.txt", "r");
	if (fp == NULL)
	{
		printf("Error in - opening file for read\n");
		return 1;
	}
	char buf[100]; // For storing one line of text
	int ch = 0;    // For storing one character
	//while(!feof(fp))
	while(ch != EOF)
	{
		ch = fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
	return 0;
}