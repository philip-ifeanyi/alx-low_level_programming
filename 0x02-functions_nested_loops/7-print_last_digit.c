#include "main.h"

/**
 * print_last_digit - A function to print the last digit of a number
 * @c: the number to be computed
 *
 * Return: Return the value of the last digit
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit);
	return (1);
}
