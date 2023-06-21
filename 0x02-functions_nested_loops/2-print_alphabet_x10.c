#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: "prints 10 times of the lowercase alphabets"
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	char m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
