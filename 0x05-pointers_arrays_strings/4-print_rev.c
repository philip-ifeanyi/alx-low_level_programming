#include "main.h"
#include <string.h>

/**
 * print_rev - A function to print a string in reverse followed by a new line
 * @s: THe string to pe reversed
 */

void print_rev(char *s)
{
	char temp;
	int i = 0, j;

	j = strlen(s) - 1;

	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i++;
		j++;
	}

	_putchar(*s);
	_putchar('\n');
}
