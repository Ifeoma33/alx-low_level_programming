#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create array of char
 * @size: Size of arrZZay
 * @c: Char to assign
 * Description: Create array of size and assign char c
 * Return: Pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int b;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		str[b] = c;
	return (str);
}
