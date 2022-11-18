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
	}
	else
		previous->next = current->next;
	return (0);
	free(current);
}
