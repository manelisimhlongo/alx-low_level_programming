#include "main.h"

/**
 * append_text_to_file - function that appends text
 * @filename: file to append text to
 * @text_content: content to append to file
 * Return: 1 if successful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0, open_file, write_file;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_RDWR | O_APPEND);
	if (open_file < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(open_file);
		return (1);
	}
	while (text_content[length] != '\0')
		length++;

	write_file = write(open_file, text_content, length);
	if (write_file < 0)
	{
		close(open_file);
		return (-1);
	}
	close(open_file);
	return (1);
}
