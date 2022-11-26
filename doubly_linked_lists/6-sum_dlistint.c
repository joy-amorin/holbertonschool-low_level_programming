#include "lists.h"

/**
* sum_listint - sum of all the data (n) of a linked list
* @head: pointera to head list
*
* Return: returns the sum of all the data (n), 0 if the list is empty
*/


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = NULL;

	node = head;

	if (node == NULL)
	{
		return (0);
	}
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}

	return (sum);
}
