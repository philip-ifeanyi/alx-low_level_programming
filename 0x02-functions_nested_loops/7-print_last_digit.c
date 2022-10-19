#include "main.h"

/**
 * print_last_digit - A function to print the last digit of a number
 * @c: the number to be computed
 *
 * Return: Return the value of the last digit
 */

int print_last_digit(int c)
{
	c %= 10;

	if (c < 0)
		c *= -1;

	_putchar(c);
	return (c);
}
