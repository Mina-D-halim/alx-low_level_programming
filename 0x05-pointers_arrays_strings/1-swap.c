#incloud"main.h"
/**
 * swap_int - swaps the values of two integers
 * @a:the first value
 * @b:the second value 
 */
 void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
