#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all element of list_t
 * list_t: List to be printed
 * @h: Pointer to list_t
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t ab = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (ab);
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		ab++;
	}
	return (ab);
}
