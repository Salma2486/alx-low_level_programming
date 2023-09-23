#include "lists.h"
/**
 *free_list - This is the entry point of the code
 *@head: kjfkreu
 *Return:0 Success
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
