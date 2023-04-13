#include "main.h"

/**
 * _calloc - Function that allocate memory
 * @nmemb: Input value;
 * @size: Input value
 * Return: Always Success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *myp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	myp = (void *)malloc(size * nmemb);

	if (myp == NULL)
		return (NULL);
	memset(myp, 0, size * nmemb);
	return (myp);
}
