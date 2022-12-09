#include <stdio.h>

/**
* main - Alphabet game
*
*Description: A program that print the alphabet in lowercase
*
*Return: Always 0 (Success)_
*/

int main(void)
{
	char chr;
	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
		printf("\n");
	}
	return(0);
}
