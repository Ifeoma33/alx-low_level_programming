#include "main.h"
/**
 * _islower - Entry point
 * Description: Print function that checks lowercase character
 * @c: Checks if c is lowercase
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
