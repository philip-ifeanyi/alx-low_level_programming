#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isfigit -  A function that checks for digits
 * @c: the digit to be tested
 *
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
