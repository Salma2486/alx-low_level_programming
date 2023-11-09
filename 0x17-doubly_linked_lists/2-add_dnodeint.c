#include "lists.h"
/**
 *add_dnodeint - This is the entry point of the code
 *@head: ojdriengiu
 *@n: oirwjogfr
 *Return:0 Success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = (*head);
	if (*head != NULL)
	{
		(*head)->prev = ptr;
	}
	*head = ptr;
	return (ptr);
}
