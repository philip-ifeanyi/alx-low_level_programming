# include <stdio.h>
/**
 * main - A program to print alphabets, lowercase
 * Return: Always return 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar ('\n');
	return (0);
}
