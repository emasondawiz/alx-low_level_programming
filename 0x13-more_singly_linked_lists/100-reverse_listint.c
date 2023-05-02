#include "lists.h"

/**
 * reverse_listint - function that reverse
 * @head: input value
 * Return: always success
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
