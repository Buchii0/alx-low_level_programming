#include "lists.h"

/**
 * get_dnodeint_at_index - print the nth node of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return:  the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (head);
}
