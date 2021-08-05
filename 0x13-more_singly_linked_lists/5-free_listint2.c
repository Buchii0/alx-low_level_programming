#include "lists.h"
/**
 * free_listint2 -  free a list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp; /*Declaring list*/

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL) /*Run through the list to the end*/
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
