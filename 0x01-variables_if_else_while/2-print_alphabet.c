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
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
