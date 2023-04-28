#include "lists.h"

/**
 * free_list - a function that free memory
 * @head: input value
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
