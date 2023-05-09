#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the posix stdo
 * @filename: pointer to text
 * @letters: number of characters
 * Return: letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t rd;
	char *buff;
	FILE *fp;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	rd = fread(buff, sizeof(char), letters, fp);
	fwrite(buff, sizeof(char), rd, stdout);
	fclose(fp);
	free(buff);
	return (rd);
}
