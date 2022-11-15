#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* print_list - prints all the elemnts of a list_t list
*
* @h: pointer to the structure
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;	

	}
	return (i);
}
