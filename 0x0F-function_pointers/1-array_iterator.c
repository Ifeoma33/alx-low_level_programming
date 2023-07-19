#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Prints array element on a newline
 * @array: Array
 * @size: Number element to printed
 * @action: Pointer to print in regular function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

