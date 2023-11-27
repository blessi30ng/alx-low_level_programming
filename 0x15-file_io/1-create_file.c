#include "main.h"

/**
 * create_file - creates a file
 * @text_content: pointer to a string to write file
 * @filename: filename
 * Return: success 1, failure -1
 */

int create_file(const char *filename, char *text_content)
{
	int fds, w, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fds = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fds, text_content, length);
	if (fds == -1 || w == -1)
		return (-1);
	close(fds);
	return (1);
}
