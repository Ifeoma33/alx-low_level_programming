#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 *
 * @s: Pointer to the string to be printed
 * Return: The lenght of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
