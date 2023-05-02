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
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	i = 0;

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

	while (i < idx && temp != NULL)
	{
		i = i + 1;
		if (i + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
