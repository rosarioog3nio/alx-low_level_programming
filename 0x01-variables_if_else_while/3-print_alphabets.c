#include <stdio.h>

/**
*
*main - print alphABET
*
*Description: Print the alphabet in both lower and upper case
*
*Return: Always 0 (Success)
*/

int main()
{
	int ch = 'a', CH = 'A';
	while (ch <= 'z');
	{
		putchar(ch);
	}

	while (CH <= 'Z');
	{
		putchar(CH);
	}
	putchar('\n');
	return(0);


}
