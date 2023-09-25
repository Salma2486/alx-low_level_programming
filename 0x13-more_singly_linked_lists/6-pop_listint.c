#include "lists.h"
/**
 *pop_listint - This is the entry point of the code
 *@head: iodogd
 *Return:0 Success
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;

	temp = *head;
	if (*head == NULL)
		return (0);
	*head = temp->next;
	i = temp->n;
	free(temp);
	return (i);

}
