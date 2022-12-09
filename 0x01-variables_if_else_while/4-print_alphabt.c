#include <stdio.h>
/**
*main - print the alphabet without q and e
*
*Description: print the  the alphabet without e & q
*Return: Always Success (0)
*/

int main(void)
{
	int ch = 'a';
	while (ch <= 'z')
	{
		if ((ch != 'q' && ch != 'e'))
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
