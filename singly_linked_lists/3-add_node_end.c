#include "lists.h"
#include <string.h>

/**
* add_node_end - add node to end of list
 *@strd - new pointer to copy str
* @node - new node
* @tmp - tmp pointer
* @head: pointer to pointer address
* @str: string to copy
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp;
	char *strd;

	node = malloc(sizeof(list_t));

	if (node != NULL)

		strd = strdup(str);


	if (strd != NULL)
	{

		node->str = strd;
		node->len = strlen(strd);
		node->next = NULL;
	}


	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{	tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
		return (node);
	}
	return (NULL);
	free(node);
}
