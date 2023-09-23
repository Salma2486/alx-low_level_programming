#include "lists.h"
/**
 **add_node - This is the entry point of the code
 *@head: lisdnfve
 *@str: jdfkglnvde
 *Return:0 Success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	return (node);
}
