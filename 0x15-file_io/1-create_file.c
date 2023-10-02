#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: strings to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t length = 0;
	int open_file, write_file;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (open_file < 0)
	{
		close(open_file);
		return (-1);
	}

	if (text_content == NULL)
		return (0);

	while (text_content[length] != '\0')
		length++;
	/*length = strlen(text_content);*/

	write_file = write(open_file, text_content, length);
	if (write_file < 0)
		return (-1);
	close(open_file);

	return (1);
}
