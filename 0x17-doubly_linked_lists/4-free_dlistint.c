#include "lists.h"
/**
 *free_dlistint - This is the entry point of the code
 *@head: ergertg
 *Return:0 Success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
