#include "lists.h"
/**
 *free_listint - This is the entry point of the code
 *@head: erkmgekplr
 *Return:0 Success
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
