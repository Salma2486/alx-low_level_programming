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
	dlistint_t *newp = malloc(sizeof(dlistint_t));

	if (h == NULL || newp == NULL)
	{
		return (NULL);
	}
	newp->n = n;
	newp->next = NULL;
	newp->prev = NULL;
	if (idx == 0)
	{
		newp->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newp;
		}
		*h = newp;
		return (newp);
	}
	temp = *h;
	while (temp != NULL && idx > 0)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	newp->next = temp;
	newp->prev = temp->prev;
	if (temp->prev != NULL)
	{
		temp->prev->next = newp;
	}
	temp->prev = newp;
	return (newp);
}
