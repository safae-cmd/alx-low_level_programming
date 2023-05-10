#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: string
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrbytes = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + wrbytes))
			wrbytes++;
		if (write(fd, text_content, wrbytes) != wrbytes)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
