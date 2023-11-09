#include "lists.h"
/**
 *add_dnodeint_end - This is the entry point of the code
 *@head: kjdfgve
 *@n: irsjoeg
 *Return:0 Success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *tp;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		tp = *head;
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = temp;
		temp->prev = tp;
	}
	return (temp);
}
