#include "main.h"
/**
 * _memset - To fill a particular  memory with a specific value
 * @b: The value to be filled
 * @n: The bytes number that will be changed
 * @s: Pointer to the memory to be filled
 * Return: The changed array with new value of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
