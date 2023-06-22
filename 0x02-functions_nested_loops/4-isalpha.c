#include "main.h"
/**
 * _isalpha - Entry point
 * @c: Checks for alphabets characters
 *
 * Return: Always 1 for success and 0 for failure
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
