#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strlen - retun the length of a scring
*
*@s: the string pointer
*
*Return: Always int lenth of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
