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
	int n ;
		while  (n < 10)
		{
			putchar(n);
			n++;
		}
		putchar('\n');
	return (0);
}
