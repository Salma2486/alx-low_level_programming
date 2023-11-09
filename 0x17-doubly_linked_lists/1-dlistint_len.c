#include "lists.h"
/**
 *dlistint_len - This is the entry point of the code
 *@h: hgjyh
 *Return:0 Success
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
