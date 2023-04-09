#include "main.h"
#include <stdlib.h>
/**
 * create_file - desc
 * @filename: file name
 * @text_content: content to be written
 * Return: 1 for success -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (0);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600_);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
