#include "main.h"
#include <stdlib.h>
/**
  * read_textfile - read and print text file to STDOUT
  * @filename: The text file bieng read
  * @letters: The number of letters to be read
  *
  * Return: 0 if file cannot be opened or read.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int up;
	ssize_t read1, write1;
	char *buffer;

	up = open(filename, O_RDONLY);
	if(up == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char)* letters);

	read1 = read(up, buffer, letters);

	write1 = write(STDOUT_FILENO, buffer, read1);

	free(buffer);
	close(up);
	return (write1);
}
