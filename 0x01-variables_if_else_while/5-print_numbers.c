#include <stdio.h>
/**
  *main - Entry point
  *description: 'prints all singlr digit number of base 10 starting from 0'
  *return : always 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
