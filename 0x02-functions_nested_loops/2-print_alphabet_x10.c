# include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - A program to print alphabets, lowercase
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			putchar(c);
		}
		putchar ('\n');
		i++;
	}
}
