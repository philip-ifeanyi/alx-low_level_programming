# include <stdio.h>
/**
 * main - A program to print hexadecimal numbers between 0 and 'f'
 * Return: Always return 0
 */

int main(void)
{
	char n;

	for (n = 0; n <= 15; ++n)
	{
		if (n < 10)
		{
			putchar(n % 10 + '0');
		}
		else
		{

	}

	putchar ('\n');
	return (0);
}
