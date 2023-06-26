#include "main.h"
/**
 * rev_string - prints the reverse of a string
 * @s: String to be reversed
 *
 * Return: Reversed string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}

}
