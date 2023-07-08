#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Original memory
 * @src: Copied memory
 * @n: Number of bytes
 * Return: Memory with copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int p = n;

	for (; s < p; p++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
