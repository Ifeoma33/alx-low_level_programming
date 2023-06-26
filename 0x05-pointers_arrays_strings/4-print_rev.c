#include "main.h"
/**
 * print_rev - Prints a string in reverse with a new line
 * @s: Strings to print
 *
 * Return: Return string in inverse form
 */
void print_rev(char *s)
{
	int strinverse = 0;
	int o;

	while (*s != '\0')
	{
		strinverse++;
		s++;
	}
	s--;
	for (o = strinverse; o > 0; o--)
	{
		_putchar(*s);
		s--;
}
