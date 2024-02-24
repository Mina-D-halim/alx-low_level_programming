#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: analized char.
 *
 * Return: char  with all vowels changed.
 */
char *leet(char *s)
{
	char ch[] = "aeotlAEOTL";
	char nu[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == ch[j])
			{
				*(s + i) = nu[j];
			}
		}
		i++;
	}
	return (s);
}
