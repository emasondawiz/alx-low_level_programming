#include "lists.h"

/**
 * print_list - function that prin
 * @h: input value
 * Return: Always success
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		h = h->next;
		count = count + 1;
	}
	return (count);
}
