#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of list
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (!head)
		return (NULL);
	tortoise = hare = head;
	while (hare->next && (hare->next)->next)
	{
		tortoise = tortoise->next;
		hare = (hare->next)->next;
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
