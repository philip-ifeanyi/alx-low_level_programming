# include <stdio.h>
/**
 * main - A program to print numbers between 0 and 9
 * Return: Always return 0
 */

int main(void)
{
	char n;

	for (n = 0; n <= 9; ++n)
		putchar(n % 10 + '0');
	putchar ('\n');
	return (0);
}
