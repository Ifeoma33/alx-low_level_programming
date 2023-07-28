#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Returns the numbers of element
 * list_t: The element to be counted
 * @h: Pointer to the list_t
 * Return: Numbers of element
 */
size_t list_len(const list_t *h)
{
	size_t bc = 0;

	while (h != NULL)
	{
		bc++;
		h = h->next;
	}

	return (bc);
}
