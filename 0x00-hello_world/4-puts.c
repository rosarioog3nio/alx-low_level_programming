#include <stdio.h>
#include <string.h>
/*
* main - print a simple message using puts
*
*Description: print a message using puts
*/

int main(void)
{
	char str1[52];

	strcpy(str1, "Programming is like building a multilingual puzzle\n");
	puts(str1);
	return (0);
}
