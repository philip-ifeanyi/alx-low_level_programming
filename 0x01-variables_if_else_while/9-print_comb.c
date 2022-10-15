# include <stdio.h>
/**
 * main - A program to print numbers between 0 and 9
 * Return: Always return 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
	{
		putchar(n % 10 + '0');

		if (n == 9)
			continue;

		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
