#include "lists.h"
/**
 **add_node - This is the entry point of the code
 *@head: orf
 *@str: oidjgof
 *Return:0 Success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
