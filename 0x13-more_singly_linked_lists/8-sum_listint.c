#include "lists.h"
/**
 *sum_listint - This is the entry point of the code
 *@head: duigei
 *Return:0 Success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
