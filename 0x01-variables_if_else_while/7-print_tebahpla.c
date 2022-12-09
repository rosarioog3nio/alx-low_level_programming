#include <stdio.h>
/**
*main - tabahpla
*
*Description: print alphabet in reverse
*
*Return: Success (0)
*/

int main(void)
{
int n = 'z';

while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);


}
