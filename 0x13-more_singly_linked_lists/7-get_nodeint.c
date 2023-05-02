#include "lists.h"

/**
 * get_nodeint_at_index - function that gets the node
 * @head: input value
 * @index: input value
 * Return: always success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
	return (temp);
}
