#include "main.h"
/**
 * _strlen - returns the length of a string
 * @c: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		i++;
	}

	return (i);
}
