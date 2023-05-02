#include "lists.h"

/**
 * pop_listint - function that deletes the head of a node
 * @head: input value
 * Return: always success
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (head == NULL || *head == NULL)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
