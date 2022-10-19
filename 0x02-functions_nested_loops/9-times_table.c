#include "main.h"

/**
 * times_table - A function to print the times table until 9
 */

void times_table(void)
{
	int i;
	int j;
	int d;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j <= 9; j++)
		{
			d = i * j;
			d /= 10;

			if (d > 0)
			{
				_putchar(d + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar(d + '0');


			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
