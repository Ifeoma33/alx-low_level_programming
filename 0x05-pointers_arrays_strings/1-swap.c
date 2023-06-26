#include "main.h"
/**
 * swap_int - Swap the value of two integers
 * @a: First integers
 * @b: Second integers
 * Return: Input
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
