#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer 
 */
void _puts(char *st)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
	{
		_putchar(st[i]);
	}
	_putchar('\n');
}	 
