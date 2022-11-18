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
	int n = 0;


	if (*head == NULL)
		return (0);

	if (*head != NULL)
	{
		n = (*head)->n;
		*head = (*head)->next;
		free(current);
	}

	return (n);

}
