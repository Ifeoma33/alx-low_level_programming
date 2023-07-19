#include "main.h"
/**
 * main - Entry point
 *
 * @more_numbers: Prints 10 times of numbers
 *from 0 to 14
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = '0'; b <= '14'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
