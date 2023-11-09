#include "lists.h"
/**
 *sum_dlistint - This is the entry point of the code
 *@head: wrilowohfr
 *Return:0 Success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
