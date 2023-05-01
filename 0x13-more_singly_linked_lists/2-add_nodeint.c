#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: Input value
 * @n: Input value
 * Return: Always success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = MS;

	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;
	current->next = (*head);
	(*head) = current;

	return (current);
}
