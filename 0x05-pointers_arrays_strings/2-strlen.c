#include "main.h"
/**
 * _strln:  function returns the length of a string
 * @c: string to evaluate
 *
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
