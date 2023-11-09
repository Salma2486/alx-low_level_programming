#include "lists.h"
/**
 *get_dnodeint_at_index - This is the entry point of the code
 *@head: srfwrf
 *@index: ergfergfe
 *Return:0 Success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);

}
