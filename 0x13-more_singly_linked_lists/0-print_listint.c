#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n",h->n);
		count = count + 1;
		h = h->next;
	}

	return (count);
}
