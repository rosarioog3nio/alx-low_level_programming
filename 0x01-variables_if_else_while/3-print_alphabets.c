#include <stdio.h>

/**
*
*main - print alphABET
*
*Description: Print the alphabet in both lower and upper case
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int ch = 'a';
	int cH = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}
	putchar('\n');
	return(0);


}
