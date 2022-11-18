#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a linked list.
* @index: index of the node
* @head: pointer to the head list
*
* Return: the nth node, NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int last_index = head->n - 1;
	unsigned int i = 0;
	listint_t *node = NULL;

	node = head;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= last_index ; i++)
	{
		if (i == index)
		{
			return (node);
		}
		if (node->next == NULL)
		{
			return (NULL);
		}
		else
			node = node->next;

	}
	return (node);
}
