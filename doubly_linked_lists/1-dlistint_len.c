#include "lists.h"

/**
* dlistint_len - return the number of elements ina linked list
* @h: pointer to head node
*
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
