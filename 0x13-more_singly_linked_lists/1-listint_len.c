#include "lists.h"

/**
 * listint_len - Function that print the length of the node and also print
 * @h: Input value
 * Return: always true
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}

	return (count);
}
