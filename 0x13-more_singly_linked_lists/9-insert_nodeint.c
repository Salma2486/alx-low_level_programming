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
	if (ptr2 == NULL)
		return (NULL);
	ptr = *head;
	if (*head == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;
	if (!idx)
		return (NULL);
	else if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
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