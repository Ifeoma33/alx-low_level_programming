#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 *
 * @s: Defins the string
 *
 * Return: Int number
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);

}
