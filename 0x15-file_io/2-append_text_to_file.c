#include "main.h"

/**
 * append_text_to_file - function that appends into a file
 * @filename: input filename
 * @text_content: Input text content
 * Return: Returns success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int counter = 0, myopen, mywrite;

	if (filename == NULL)
		return (-1);

	if (text_content)
		counter = counter + count_str(text_content);

	myopen = open(filename, O_WRONLY | O_APPEND);
	mywrite = write(myopen, text_content, counter);

	if (mywrite == -1 || myopen == -1)
		return (-1);

	close(myopen);

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
