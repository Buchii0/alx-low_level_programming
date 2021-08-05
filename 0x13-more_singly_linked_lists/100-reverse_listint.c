#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	/* new_node traverses the list, head is reset to empty list.*/
	listint_t *new_node = *head, *next_node = NULL;

	if (*head == NULL)
		return (NULL);

	/* Until no more in list, insert current before first and advance*/
	while (new_node != NULL)
	{
		new_node = (*head)->next;
		(*head)->next = next_node;
		next_node = *head;

		if (new_node != NULL)
			*head = new_node;
	}


	next_node = NULL;
	return (*head);
}
