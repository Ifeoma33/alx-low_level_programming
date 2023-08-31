#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return 0;
	}

	unsigned int convert = 0; int i;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			convert = convert * 2 + (b[i] - '0');
		}
		else
		{
			return 0;
		}
	}
	return convert;
}
