#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "prints alphabets in lowercase and then in uppercase"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int w = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (w <= 90)
	{
		putchar(w);
		w++;
	}
	putchar('\n');
	return (0);
}
