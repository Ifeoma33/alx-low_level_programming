#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: Prints numbers 0 to 9 without 2&3
 * Return: Always 0
 */
void print_most_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		if (a == '2'|| a == '4')
		{
			a++;
			continue;
			
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
		
}
