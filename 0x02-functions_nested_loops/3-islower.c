#include <stdio.h>

/**
 * _islower - a function to check if a character is lowercase
 *
 * Return: Return 0 if false and 1 if true
 */
int _islower(int c)
{
	if (c >= "a" || c <= "z")
		return (1);
	else
		return (0);
}
