#inlude "main.h"
/**
 * _islower - Entry point
 * Description: print function that checks lowercase character
 * @c: checks if c is lowercase
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a'; &&c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
