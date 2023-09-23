#include "lists.h"
/**
 *free_list - This is the entry point of the code
 *@head: fjegvdnfjo
 *Return:0 Success
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
