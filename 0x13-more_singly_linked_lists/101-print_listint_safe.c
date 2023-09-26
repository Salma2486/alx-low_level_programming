#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head, *temp = head;
	size_t count = 0;

	while (ptr != NULL && temp != NULL && temp->next != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;

		ptr = ptr->next;
		temp = temp->next->next;

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
