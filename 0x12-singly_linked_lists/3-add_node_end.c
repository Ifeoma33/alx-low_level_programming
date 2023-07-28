#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t
 * @head: Pointer to pointer to list_t
 * @str: String to be added at the end of list_t
 * Return: The address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;

	list_temp = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	add = malloc(sizeof(list_t));
	if (!add)
	{
		return (NULL);
	}
	add->str = strdup(str);
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = add;
	return (add);

}
