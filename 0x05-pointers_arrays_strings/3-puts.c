#include "main.h"

/**
 * _puts - A function that prnts a string followed by a newline
 * @str: THe string o be printed out
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
