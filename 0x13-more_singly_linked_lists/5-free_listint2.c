#include "lists.h"
/**
 *free_listint2 - This is the entry point of the code
 *@head: nolngfv
 *Return:0 Success
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
