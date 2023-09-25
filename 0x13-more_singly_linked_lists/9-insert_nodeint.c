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

	ptr = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
		{
			ptr = ptr->next;
		}
	}
	if (ptr == NULL && idx != 0)
		return (NULL);
	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	if (idx == 0)
	{
		ptr2->next = ptr;
		ptr = ptr2;
	}
	else
	{
		ptr2->next = ptr->next;
		ptr->next = ptr2;
	}
	return (ptr2);
}
