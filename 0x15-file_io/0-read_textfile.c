#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: file to read from
 * @letters: number of letters it should read and print
 * Return: actual numbers of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int open_file, write_file, read_file;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	if (open_file < 0)
	{
		free(buffer);
		return (0);
	}
	read_file = read(open_file, buffer, letters);
	if (read_file < 0)
	{
		close(open_file);
		free(buffer);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file < 0)
		return (0);
	close(open_file);
	free(buffer);
	return (write_file);
}
