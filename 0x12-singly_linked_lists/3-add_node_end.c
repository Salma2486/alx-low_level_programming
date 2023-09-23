#include "lists.h"
/**
 **add_node_end - This is the entry point of the code
 *@head: oifgmvedf
 *@str: oningfb
 *Return:0 Success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
