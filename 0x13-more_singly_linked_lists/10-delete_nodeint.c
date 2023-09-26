#include "lists.h"
/**
 *delete_nodeint_at_index - This is the entry point of the code
 *@head: kjsdhufs
 *@index: ujhrfnkuj
 *Return:0 Success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = *head->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = current->next->next;
	free(temp);
	return (1);
}
