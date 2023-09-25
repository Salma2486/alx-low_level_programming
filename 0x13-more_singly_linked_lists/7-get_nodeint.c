#include "lists.h"
/**
 **get_nodeint_at_index - This is the entry point of the code
 *@head: lidngfv
 *@index: uiege
 *Return:0 Success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
