#include "main.h"
/**
 * char * _strcpy - copies the string pointed to by src
 *@dest: Pointer is returned to dest
 *@src: pointer of the original string
 *
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int x = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for ( ; x < n ; x++)
	{
		dest[x] = src[x];
	}
	dest[n] = '\0';
	return (dest);

}
