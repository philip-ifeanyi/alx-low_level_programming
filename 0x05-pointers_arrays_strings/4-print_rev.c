#include "main.h"

/**
 * print_rev - A function to print a string in reverse followed by a new line
 * @s: THe string to pe reversed
 */

void print_rev(char *s)
{
	char temp;
	int i = 0, j;

	j = _strlen(s) - 1;

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


/**
 * _strlen - A function to count and return the length of a string
 * @s: pointer to the valur of the string to be counted
 *
 * Return: ALways return the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
