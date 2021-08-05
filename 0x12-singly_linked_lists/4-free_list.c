#include "lists.h"
/**
 * free_list -  free a list
 * @head: pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

	free(head->str);
	free(head);
}
