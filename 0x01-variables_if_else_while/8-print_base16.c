# include <stdio.h>
/**
 * main - A program to print hexadecimal numbers between 0 and 'f'
 * Return: Always return 0
 */

int main(void)
{
	int n;
	char c;

	for (n = 0; n <= 9; ++n)
		putchar(n % 10 + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar ('\n');
	return (0);
}
