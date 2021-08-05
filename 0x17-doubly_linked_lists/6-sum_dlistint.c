#include "lists.h"

/**
 * sum_dlistint - sum elements
 * @head: head
 * Return: sum elements of doubly linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);

}
