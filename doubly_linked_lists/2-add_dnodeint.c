#include "lists.h"

/**
* add_dnodeint - add a new node of the beginning of a list.
* @head: pointer to head node
*@n: data to store in the new node
*
* Return: addres of the new element, NULL if it fail
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));

	if (node != NULL)
	{
		node->next = *head;
		*head = node;
		node->n = n;

		return (node);
	}
	else
	return (NULL);
	free(node);

}

