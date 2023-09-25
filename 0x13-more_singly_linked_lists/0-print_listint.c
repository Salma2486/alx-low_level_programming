#include "lists.h"
/**
 *print_listint - This is the entry point of the code
 *@h: jkbnjkrjs
 *Return:0 Success
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
