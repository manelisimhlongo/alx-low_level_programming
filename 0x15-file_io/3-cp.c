#include "main.h"

void copy(int from, int to, char *buffer, char *src, char *destination);

/**
 * main - function that copies content from one file to another
 * @argc: number of arguments
 * @argv: arguments passed to array
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int open_file_from, open_file_to;
	char temp[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_file_from = open(argv[1], O_RDONLY);
	if (open_file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	open_file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (open_file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(open_file_from);
		exit(99);
	}
	copy(open_file_from, open_file_to, temp, argv[1], argv[2]);
	close(open_file_from);
	close(open_file_to);
	return (0);
}


/**
 * copy - function that copies content from one file to another
 * @from: file to copy from
 * @to: file to copy to
 * @buffer: size in bytes to copy
 * @src: source file name
 * @destination: destination file name
 * Return: Nothing
 */
void copy(int from, int to, char *buffer, char *src, char *destination)
{
	int write_to, counter = 1024;

	while (counter > 0)
	{
		counter = read(from, buffer, sizeof(buffer));
		if (counter < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read file %s\n", src);
			exit(98);
		}
		write_to = write(to, buffer, counter);
		if (write_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
			exit(99);
		}
	}
}
