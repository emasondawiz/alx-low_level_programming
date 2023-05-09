#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: input value
 * @text_content: input value
 * Return: Returns success
 */
int create_file(const char *filename, char *text_content)
{
	int fp, mywrite, counter = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
		counter = counter + count_str(text_content);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	mywrite = write(fp, text_content, counter);

	if (fp == -1 || mywrite == -1)
		return (-1);

	close(fp);

	return (1);
}

/**
* count_str - counts the length of a string
* @str: the string iput
* Return: Returns the length of the string
*/
int count_str(char *str)
{
	int counter = 0;

	while (*str)
	{
		counter = counter + 1;
		str++;
	}
	return (counter);
}
