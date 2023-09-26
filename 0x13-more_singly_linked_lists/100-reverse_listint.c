#include "lists.h"
/**
 **reverse_listint - This is the entry point of the code
 *@head: juei
 *Return:0 Success
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i, *j;

	i = NULL;
	j = NULL;

	while (*head != NULL)
	{
		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}

	*head = i;
	return (i);
}
