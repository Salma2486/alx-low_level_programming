#include "lists.h"
/**
 *list_len - This is the entry point of the code
 *@h: kjdfunlsrj
 *Return:0 Success
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			h = h->next;
		i++;
	}
	return (i);
}
