#include "main.h"
/**
 * puts2 - prints every character starting with a first charater
 * @str: Strings characters to be printed
 *
 * Return: Charactesr of a string
 */
void puts2(char *str)
{
	int b = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		b++;
	}
	t = b - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
