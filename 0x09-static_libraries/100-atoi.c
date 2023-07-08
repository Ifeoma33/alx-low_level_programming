#include "main.h"
/**
 * _atoi - Convert a string into an integer
 * @s: String to be converted
 * Return: An integer
 */
int _atoi(char *s)
{
	int sign = 1, p = 0;
	unsigned int res = 0;

	while (!(s[p] <= '9' && (s[p] >= '0') && s[p] != '\0'))
	{
		if (s[p] == '-')
		{
			sign *= -1;
		}
		p++;
	}
	while (s[p] <= '9' && (s[p] >= '0' && s[p] != '\0'))
	{
		res = (res * 10) + (s[p] - '0');
		p++;
	}
	res *= sign;
	return (res);
}


