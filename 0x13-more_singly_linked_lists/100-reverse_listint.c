listint_t *reverse_listint(listint_t **head)
{
	listint_t *i, *j;

	i = NULL;
	j = NULL;

	while (*head != NULL)
	{
		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}

	*head = i;
	return (i);
}
