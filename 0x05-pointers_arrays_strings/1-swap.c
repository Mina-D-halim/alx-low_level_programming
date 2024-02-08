#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @x: pointer to first value
 * @y: pointer to second value
 */
void swap_int(int *x, int *y)
{
	int c;

	c = *x;
	*x = *y;
	*y = c;
}
