#include "lists.h"


/**
 * free_listint - it frees up the allocated memory
 * @head: Input value
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
