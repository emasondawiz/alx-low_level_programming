#include "lists.h"
/**
 * add_node_end - function that add node at the end
 * @head: starting of a node
 * @str: string input
 *  Return: Always success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	size_t count = 0;

	while (str[count])
		count++;

	new = MS;
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
