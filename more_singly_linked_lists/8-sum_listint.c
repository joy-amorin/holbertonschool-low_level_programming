#include "lists.h"

/**
* sum_listint - sum of all the data (n) of a linked list
* @head: pointera to head list
*
* Return:  returns the sum of all the data (n), 0 if the list is empty
*/

int sum_listint(listint_t *head)

{
	listint_t *node;
	int sum = 0;

	node = head;

	if (head == NULL)
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
