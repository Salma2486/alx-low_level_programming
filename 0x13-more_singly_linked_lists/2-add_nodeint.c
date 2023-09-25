#include "lists.h"
/**
 **add_nodeint - This is the entry point of the code
 *@n: odigjf
 *@head: rdfge
 *Return:0 Success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
