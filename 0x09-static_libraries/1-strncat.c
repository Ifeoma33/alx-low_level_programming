#include "main.h"
/**
 * _strncat - The lenght after concatenation
 * @dest: First string
 * @src: Second string
 * @n: Number of bytes
 * Return: Lenght of concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

