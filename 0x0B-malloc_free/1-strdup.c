#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a new string which is a
 * duplicate of the string str
 * @str: char
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *me;
	int a, r = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	me = malloc(sizeof(char) * (a + 1));

	if (me == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		me[r] = str[r];

	return (me);
}

