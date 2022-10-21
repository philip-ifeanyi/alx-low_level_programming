#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper -  A function that checksfor uppercase characters
 * @c: the character to be tested
 *
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
