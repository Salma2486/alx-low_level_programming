#include "lists.h"
/**
 *print_dlistint - This is the entry point of the code
 *@h: odufhnvoodusrfgv
 *Return:0 Success
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return count;
}
