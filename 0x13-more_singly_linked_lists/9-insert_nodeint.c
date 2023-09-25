#include "lists.h"
/**
 **insert_nodeint_at_index - This is the entry point of the code
 *@head: jkdfnkgveld
 *@idx: iusfdghrf
 *@n: uje
 *Return:0 Success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int i;

	ptr2 = malloc(sizeof(listint_t));
	ptr = *head;
	if (ptr2)
	{
		ptr2->n = n;
		if (idx == 0)
		{
			ptr->next = *head;
			*head = ptr;
		}
		else
		{
			while ((ptr != NULL) && (i < idx))
			{
				ptr = ptr->next;
				i++;
			}
			if (i < idx)
			{
				ptr2->next = ptr->next;
				ptr->next = ptr2;
			}
		}
	}
	return (ptr2);
}
