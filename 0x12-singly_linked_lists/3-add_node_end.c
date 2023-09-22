#include "lists.h"
/**
 **add_node_end - This is the entry point of the code
 *@head: junfvie
 *@str: iuj
 *Return:0 Success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *i;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;
	i = *head;

	if (i == NULL)
	{
		*head = new;
	}
	else
	{
		while (i->next != NULL)
			i = i->next;
		i->next = new;
	}

	return (*head);
}
