#include <stdio.h>
#include "main.h"

/**
*swap_int - swaps the values of 2 ints
*
*@a:  int a
*
*@b: int b
*
*Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int s;
	
	s = *a;
	*a = *b;
	*b = s;
}
