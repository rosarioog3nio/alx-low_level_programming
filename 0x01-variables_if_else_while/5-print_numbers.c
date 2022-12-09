#include <stdio.h>

/**
*main - output numbers
*
*Description: output numbers of base 10, < 10
*
*Return: Always Success (0)
*/

int main()
{
	int n;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
