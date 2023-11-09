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
	dlistint_t *temp;
	dlistint_t *temp2 = malloc(sizeof(dlistint_t));
	dlistint_t *newp = malloc(sizeof(dlistint_t));

	if (h == NULL)
	{
		return (NULL);
	}
	if (newp == NULL)
		return (NULL);
	temp = *h;
	newp->n = n;


	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
	{
		temp->next = newp;
		newp->prev = temp;
	}
	else
	{
		temp2 = temp->next;
		temp->next = newp;
		temp2->prev = newp;
		newp->next = temp2;
		newp->prev = temp;
	}
	return (newp);
}
