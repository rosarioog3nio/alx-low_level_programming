#include <stdio.h>

/**
*main - base 16 numbers
*
*Description: printbase 16 number
*
*Return: Success (0)
*/
int main(void)
{
	int num = '0'; /*Initialize num to 0*/
	char letter = 'a'; /*Initialize letter to a*/

	while (num <= '9') /*Print 0-9*/
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f') /*Print a-f*/
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
