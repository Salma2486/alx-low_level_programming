#include "lists.h"
/**
 *free_list - wpeofimkpewrf
 *@head: wlrokeofir
 *Return: 0
 */

void free_list(list_t *head)
{
	list_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(c->str);
		free(c);
	}
}
