#include "main.h"
/** create_file - function that create a file
  * @filename: The file to be created
  * @text_content: A pointer to the file created
  *Return: Return -1 if the function fails hence return 1
  *
  */
int create_file(const char *filename, char *text_content)
{
	int file, result = 1, countn = 0;

	if (!filename)
	{
		return (-1);
	}
	file = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
	while (text_content[countn])
	countn++
	result = write(file, text_content, countn);
	}
	if (result == -1)
	return (-1);
	close(file);
	return (1);

