#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * @head: input value
 * @idx: input value
 * @n: input value
 * Return: always success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = MS;
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	idx--;

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
