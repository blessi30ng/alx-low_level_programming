#include "main.h"

/**
 * read_textfile - reads text file
 * @letters: no of letters
 * @filename: name of file being read
 * Return: actual no of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fds;
	ssize_t w;
	ssize_t t;

	fds = open(filename, O_RDONLY);
	if (fds == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fds, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fds);
	return (w);
}
