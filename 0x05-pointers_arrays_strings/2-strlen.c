#include "main.h"

/**
 * _strlen - A function to count and return the length of a string
 * @s: pointer to the valur of the string to be counted
 *
 * Return: ALways return the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
