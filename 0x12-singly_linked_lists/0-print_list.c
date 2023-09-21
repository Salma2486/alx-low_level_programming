#include "lists.h"
/**
 *print_list - This is the entry point of the code
 *@size_t: ujhdsfie
 *@list_t: iuhfwri
 *@h: iudreigr
 *Return:0 Success
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
