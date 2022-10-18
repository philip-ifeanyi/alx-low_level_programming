# include <stdio.h>

/**
 * print_alphabet - A program to print alphabets, lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar ('\n');
}

/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
