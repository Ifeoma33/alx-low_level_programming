#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, num = 0;
	unsigned long int alph;

	for (a = 63; a >= 0; a--)
	{
		alph = n >> a;

		if (alph & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

