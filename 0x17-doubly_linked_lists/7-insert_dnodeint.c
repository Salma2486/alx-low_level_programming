#include "lists.h"
/**
 *insert_dnodeint_at_index - This is the entry point of the code
 *@h: rliehnogve
 *@idx: liwhrfolierf
 *@n: eoirjoeig
 *Return:0 Success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *node;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node)
	{
		node->n = n;
		if (idx == 0 || head == NULL)
		{
			add_dnodeint(head, n);
		}
		else
		{
			tmp = *head;
			while ((tmp != NULL) && (i + 1 < idx))
			{
				tmp = tmp->next;
				i++;
			}
			if (i + 1  == idx)
			{
				if (tmp == NULL)
				{
					add_dnodeint_end(head, n);
				}
				else
				{
					node->prev = tmp;
					node->next = tmp->next;
					tmp->next = node;
					(node->next)->prev = node;
				}
			}
		}
	}
	return (node);
}
