#include <stdio.h>
/**
*main - output numbers using chatput
*
*Description: output numbers of base 10 < 10 using charput
*
*Return: Always Success (0)
*/

int main(void)
{
	int n = '0';

	while  (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
