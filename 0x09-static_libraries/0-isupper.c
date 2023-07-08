#include "main.h"
/**
 * _isupper - Checks if letters are in upper case
 * @c: Letters to be checked
 * Return: Return 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

