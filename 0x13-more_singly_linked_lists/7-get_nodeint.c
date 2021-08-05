#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 * @head: pointer
 * @index : index of the node
 * Return: count head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
