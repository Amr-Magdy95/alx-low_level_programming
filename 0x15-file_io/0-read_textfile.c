#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - desc
 * @filename: desc
 * @letters: num
 * Return: num of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);
	free(buff);
	close(fd);
	return (w);
}
