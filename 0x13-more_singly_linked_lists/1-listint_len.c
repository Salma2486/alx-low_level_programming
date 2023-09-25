#include "lists.h"
/**
 *listint_len - This is the entry point of the code
 *@h: iknosfv
 *Return:0 Success
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h =  h->next;
		i++;
	}
	return (i);
}
