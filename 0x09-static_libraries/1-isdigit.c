#include "main.h"
/**
 * _isdigit - Checks if character is a digit
 * @c: Character to be checked
 *
 * Return: 1 if character is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
