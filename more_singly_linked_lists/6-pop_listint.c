#include "lists.h"

/**
*pop_listint - delete the head node for a list
*
* @head: pointer to a head node
*
* Return: returns the head node’s data (n), 0 if list is empty
*
*/

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	int n = 0;

	while ((current != NULL) && (current->n != (*head)->n))
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (0);

	if (*head == current)
	{
		*head = current->next;
		n = current->n;
	}
	else
		previous->next = current->next;
	return (n);
	free(current);
}
