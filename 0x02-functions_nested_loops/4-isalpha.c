#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - a function to check if a character is lowercase
 * @c: the function accepts parameter c
 *
 * Return: Return 0 if false and 1 if true
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
