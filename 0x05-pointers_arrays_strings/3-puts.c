#include "main.h"
/**
 * _puts - Prints a string and a newline
 *
 * @str: Declare string
 * Return: Input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');

}
