#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - print last digit of a given number "n"
*
*Description: for a given int "n" print the last digit
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else if (lastDigit < 6 && lastDigit % 10 != 0)
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}
