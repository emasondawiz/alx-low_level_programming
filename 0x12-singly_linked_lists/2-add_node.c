#include "lists.h"

/**
 * add_node - function that prin
 * @head: input value
 * @str: Inpu5 value
 * Return: Always success
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t num = 0;
	list_t *new = NULL;

	while (str[num] != '\0')
		num = num + 1;
	new = MS;
	if (new == NULL)
		return (NULL);
	new->len = num;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
