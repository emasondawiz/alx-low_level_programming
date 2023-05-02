#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete at a particular point
 * @head: input value
 * @index: input value
 * Return: always true
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i;

	i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i = i + 1;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
