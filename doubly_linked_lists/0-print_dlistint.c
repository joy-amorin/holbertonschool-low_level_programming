#include "lists.h"


/**
* print_dlistint - print all elements of a list
* @h: pointer to head
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
			i++;
	}

	return (i);
}
