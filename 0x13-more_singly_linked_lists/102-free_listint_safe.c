#include "lists.h"

/**
 * free_listint_safe - functio
 * @h: input value
 * Return: always success
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0, difference;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length = length + 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			length = length + 1;
			break;
		}
	}

	*h = NULL;

	return (length);
}
