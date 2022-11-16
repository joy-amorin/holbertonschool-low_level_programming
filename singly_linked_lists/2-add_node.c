#include "lists.h"
#include <string.h>
#include <stddef.h>
/**
* add_node - add a new node
*
* @head: pointer to ponter adres
* @str: string to copy
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;
	char *strd;


	node = malloc(sizeof(list_t));

	if (node != NULL)
	{
		strd = strdup(str);
	}
	return (NULL);

	if (strd != NULL)
	{
		node->next = *head;
		*head = node;
		node->str = strd;
		node->len = strlen(strd);
		return (node);
	}
	return (NULL);
	free(node);
}
