#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to string
 * @text_content: text content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + bytes_written))
			bytes_written++;
		if (write(fd, text_content, bytes_written) != bytes_written)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
