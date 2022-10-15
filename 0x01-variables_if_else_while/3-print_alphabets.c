# include <stdio.h>
/**
 * main - A program to print alphabets, lowercase then uppercase
 * Return: Always return 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);

	putchar ('\n');

	return (0);
}
