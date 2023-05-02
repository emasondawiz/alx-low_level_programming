#include "lists.h"

/**
 * free_listint2 - it frees up the allocated memory
 * @head: Input value
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
