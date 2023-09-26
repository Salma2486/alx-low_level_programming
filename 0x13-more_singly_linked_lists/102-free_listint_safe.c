listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	listint_t *p;

	ptr = head;
	p = head;
	while (head && ptr && tr->next)
	{
		head = head->next;
		ptr = ptr->next->next;

		if (head == ptr)
		{
			head = p;
			p =  ptr;
			while (1)
			{
				ptr = p;
				while (ptr->next != head && ptr->next != p)
				{
					ptr = ptr->next;
				}
				if (ptr->next == head)
					break;

				head = head->next;
			}
			return (ptr->next);
		}
	}
	return (NULL);
}
