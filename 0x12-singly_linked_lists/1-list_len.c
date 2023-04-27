#include "lists.h"

/**
 * list_len - function that prin
 * @h: input value
 * Return: Always success
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
