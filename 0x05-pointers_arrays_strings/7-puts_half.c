#include "main.h"
/**
 * puts_half - Prints half of a string
 *@str: String to be printed
 *
 * Return: Half of the string
 */
void puts_half(char *str)
{
	int a, n, full;

	full = 0;

	for (a = 0; str[a] != '\0'; a++)
		full++;

	n = (full / 2);

	if ((full % 2) == 1)
		n = ((full + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}



