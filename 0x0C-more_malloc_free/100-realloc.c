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

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		newprt = malloc(new_size);

		if (newprt == NULL)
		{
			return (NULL);
		}
		else
		{
			free(ptr);
			return (newprt);
		}
	}

	newprt = malloc(new_size);

	if (newprt == NULL)
		return (NULL);
	if (new_size < old_size)
		memcpy(newprt, ptr, new_size);
	else
		memcpy(newprt, ptr, old_size);

	free(ptr);
	return (newprt);
}
