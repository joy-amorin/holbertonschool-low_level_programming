#include "lists.h"

/**
* add_dnodeint_end - add node at the end of a list
* @head: pointer to linked list
* @n: data to store in new node
*
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *end = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}
	else
	{
		while (end->next)
			end = end->next;
		end->next = node;
		node->prev = end;
		return (node);
	}
}

