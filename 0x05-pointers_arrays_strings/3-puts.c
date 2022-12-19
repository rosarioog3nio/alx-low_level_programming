#include "main.h"
#include <stdio.h>

/**
*void_puts - print a string
*
*@str: the string to print
*
*Return: Length of thew string
*/

int void_puts(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
