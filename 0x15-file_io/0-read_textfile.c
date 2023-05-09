#include "main.h"

/**
 * read_textfile- Function that reads out
 * @filename: input file
 * @letters: input length of the text
 * Return: Returns the length of the mywrite
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fp, myread, mywrite;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	myread = read(fp, str, letters);
	mywrite = write(STDOUT_FILENO, str, myread);

	free(str);
	close(fp);
	return (mywrite);
}
