#include "lists.h"

/**
 * sum_listint - it gets the data of the sum
 * @head: Input value
 *Return: Return sum
 */
int sum_listint(listint_t *head)
{
	int sum_add = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum_add = sum_add + temp->n;
		temp = temp->next;
	}

	return (sum_add);
}
