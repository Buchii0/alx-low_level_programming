#include "lists.h"
/**
 * free_listint -  free a list
 * @head: pointer
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(&head->n);
		head = temp;
	}

	free(head);
}
