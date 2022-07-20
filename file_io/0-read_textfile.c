#include "main.h"
/**
 * read_textfile - Process that reads the file
 * @filename: pointer of the filename of the text file that would be read
 * @letters: length of the letters of the textfile
 * Return: number of letters can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_n, write_n;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_n = read(file_descriptor, buffer, letters);
	if (read_n == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	write_n = write(STDOUT_FILENO, buffer, read_n);
	if (write_n == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	close(file_descriptor);
	return (read_n);
}
