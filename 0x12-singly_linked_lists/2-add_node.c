#include <stdlib.h>
#include <string.h>
#include "lists"
/**
 * add_node - Adds a new node at the begining of list_t
 * @head: Pointer to pointer to the list_t
 * @str: String to be added
 * Return: The address of the new element or NULL if failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	if (!add)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	add = malloc(sizeof(list_t));

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);
}
