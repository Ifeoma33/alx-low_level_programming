#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: 0 if  n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list bet;
	unsigned int a, sum = 0;

	va_start(bet, n);

	for (a = 0; a < n; a++)
		sum += va_arg(bet, int);

	va_end(bet);

	return (sum);
}

