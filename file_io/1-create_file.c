#include "main.h"
/**
 * _strlen - for length
 * @str: string to check
 * Return: Length
*/
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * create_file - Process that creates the file
 * @filename: pointer of the filename of the text file that would be read
 * @text_content: length of the letters of the textfile
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_n;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	write_n = write(file_descriptor, text_content, _strlen(text_content));
	if (write_n == -1 || write_n != _strlen(text_content))
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
