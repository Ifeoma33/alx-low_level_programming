#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: Prints last digit of an integer
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
