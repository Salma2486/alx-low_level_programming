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
	unsigned int i;
	listint_t *ptr, *ptr2;

	ptr2 = malloc(sizeof(listint_t));
	ptr = *head;
	ptr2->n = n;
	ptr2->next = NULL;
	if (ptr2 == NULL || head == NULL)
		return (NULL);
	if (!idx)
		return (NULL);
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			ptr = ptr->next;
		}
		ptr2->next = ptr->next;
		ptr->next = ptr2;
	}
	return (ptr2);
}
