#include "main.h"
/**
 * _realloc - Realloc function
 * @ptr: input value
 * @old_size: Input value
 * @new_size: Input value
 * Return: Always success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newprt;
	(void) newprt;

	if (old_size == new_size)
	{
		return (ptr);
	}
	ptr = (void *)malloc(old_size);

	if (new_size < old_size)
	{
		newprt = (void *)realloc(ptr, new_size);
	}
	if (ptr == NULL)
	{
		newprt = (void *)realloc(ptr, new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
	free(ptr);
}
