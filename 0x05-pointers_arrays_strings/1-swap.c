#include "main.h"

/**
 * swap_int - a function to swawp the value of two integer
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int c, int d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
