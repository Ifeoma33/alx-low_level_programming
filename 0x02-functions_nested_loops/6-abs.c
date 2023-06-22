#include "main.h"
/**
 * _abs - Entry point
 *
 * Description: Compute the absolute value of an integer
 * @i: Input number as integer
 * Return: Always 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
