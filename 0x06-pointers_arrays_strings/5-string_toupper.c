#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @in: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *in)
{
	int index = 0;
	int ch = 'a' - 'A';

	for (index = 0; in[index] != '\0'; ++index)
	{
		if (in[index] >= 'a' && in[index] <= 'z')
		{
			in[index] = in[index] - ch;
		}
	}
	return (in);
}
