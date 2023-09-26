#include "lists.h"
/**
 *print_listint_safe - This is the entry point of the code
 *@head: lidbljo
 *Return:0 Success
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head, *temp = head;
	size_t count = 0;


	while (ptr != NULL && temp != NULL && temp->next != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;
		ptr = ptr->next;
		if (temp->next != NULL && temp->next->next != NULL)
		{
			temp = temp->next->next;
		}
		else
		{
			break;
		}

		if (ptr == temp)
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			printf("Loop detected, exiting...\n");
			exit(98);
		}
	}
	if (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;
	}
	return (count);
}
